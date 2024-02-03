#include "hash_tables.h"


/**
 * shash_table_create - Creates a sorted hash table.
 *
 * @size: Size of the hash table.
 *
 * Return: A pointer to hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int j;
	shash_table_t *h_t;
	shash_node_t **array;

	if (size == 0)
		return (NULL);
	h_t = malloc(sizeof(shash_table_t));
	if (!h_t)
		return (NULL);
	array = malloc((sizeof(*array) * size));
	if (!array)
	{
		free(h_t);
		return (NULL);
	}
	for (j = 0; j < size; ++j)
		array[j] = NULL;
	h_t->size = size;
	h_t->array = array;
	h_t->shead = NULL;
	h_t->stail = NULL;
	return (h_t);
}

/**
 * insert_node_handler - Insert a node in sorted hash order.
 *
 * @h_t: A pointer to hash table.
 *
 * @n: New node.
 *
 * Return: 1 (success), 0 (failure).
 */
int insert_node_handler(shash_table_t *h_t, shash_node_t *n)
{
	shash_node_t *temp;

	if (!h_t || !n)
		return (0);

	if (h_t->shead == NULL)
	{
		h_t->shead = n;
		h_t->stail = n;
	}
	else
	{
		if (strcmp(n->key, (h_t->shead)->key) <= 0)
		{
			n->snext = h_t->shead, (h_t->shead)->sprev = n;
			h_t->shead = n;
		}
		else if (strcmp(n->key, (h_t->stail)->key) > 0)
		{
			(h_t->stail)->snext = n, n->sprev = h_t->stail;
			h_t->stail = n;
		}
		else
		{
			temp = h_t->shead;
			while (temp->snext && strcmp(n->key, (temp->snext)->key) > 0)
				temp = temp->snext;
			n->sprev = temp, n->snext = temp->snext;
			(temp->snext)->sprev = n, temp->snext = n;
		}
	}

	return (1);
}

/**
 * node_creation_handler - Creates a node.
 *
 * @h_t: Hash table.
 *
 * @key: A key.
 *
 * @value: Value
 *
 * @hash: Index.
 *
 * Return: 0 (failure), 1 (success).
 */
int node_creation_handler(shash_table_t *h_t, const char *key,
		    const char *value, unsigned long int hash)
{
	shash_node_t *n;
	char *x;

	if (!h_t || !key)
		return (0);

	n = malloc(sizeof(shash_node_t));
	if (!n)
		return (0);
	x = strdup(key);
	if (!x)
	{
		free(n);
		return (0);
	}
	n->key = x;
	x = NULL;
	if (value)
	{
		x = strdup(value);
		if (!x)
		{
			free(n->key);
			free(n);
			return (0);
		}
	}
	n->value = x;
	n->next = NULL, n->sprev = NULL, n->snext = NULL;
	if ((h_t->array)[hash] == NULL)
	{
		(h_t->array)[hash] = n;
	}
	else
	{
		n->next = ((h_t->array)[hash]);
		(h_t->array)[hash] = n;
	}
	return (insert_node_handler(h_t, n));
}

/**
 * shash_table_set - Insert an element in a sorted hash table.
 *
 * @ht: A pointer to hash table.
 *
 * @key: Key value.
 *
 * @value: Value.
 *
 * Return: 1 (success), 0 (failure).
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash;
	shash_node_t *n;
	char *x;

	if (!ht | !key)
		return (0);
	hash = key_index((const unsigned char *)key, ht->size);
	x = NULL;

	n = (ht->array)[hash];
	while (n && strcmp(n->key, (char *)key))
		n = n->next;
	if (n)
	{
		if (value)
		{
			x = strdup(value);
			if (!x)
				return (0);
		}
		if (n->value)
			free(n->value);
		n->value = x;
		return (1);
	}

	return (node_creation_handler(ht, key, value, hash));
}

/**
 * shash_table_get - Retrieves value from a given key.
 *
 * @ht: Hash table.
 *
 * @key: Key.
 *
 * Return: Value ("string")
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int hash;
	shash_node_t *node;

	if (!ht)
		return (NULL);
	hash = key_index((const unsigned char *)key, ht->size);

	if ((ht->array)[hash] == NULL)
	{
		return (NULL);
	}
	node = (ht->array)[hash];
	while (node && strcmp(node->key, (char *)key))
		node = node->next;

	if (!node)
		return (NULL);
	return (node->value);

}

/**
 * shash_table_print - Prints a sorted hash table in increasing order.
 *
 * @ht: hash table, sorted.
 *
 * Returns: Nothing (technically).
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	char *flag = "";

	if (!ht)
		return;
	node = ht->shead;

	putchar('{');
	while (node)
	{
		printf("%s'%s': '%s'", flag, node->key, node->value);
		flag = ", ";
		node = node->snext;
	}
	puts("}");

}

/**
 * shash_table_print_rev - Print a sorted hash table in decreasing order.
 *
 * @ht: The sorted hash table.
 *
 * Return: Nothing.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	char *flag = "";

	if (!ht)
		return;
	node = ht->stail;

	putchar('{');
	while (node)
	{
		printf("%s'%s': '%s'", flag, node->key, node->value);
		flag = ", ";
		node = node->sprev;
	}
	puts("}");
}



/**
 * hash_table_printt - Prints a hash table.
 *
 * @ht: The hash table.
 *
 * Return: Nothing.
 */
void hash_table_printt(const shash_table_t *ht)
{
	shash_node_t *node;
	unsigned long int j;
	char *flag = "";

	if (!ht)
		return;

	putchar('{');
	for (j = 0; j < ht->size; ++j)
	{
		node = (ht->array[j]);
		if (node != NULL)
		{
			puts("new node");
			while (node)
			{
				printf("%s'%s': '%s'",
				      flag, node->key, node->value);
				flag = ", ";
				node = node->next;
			}
		}
	}
	puts("}");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 *
 * @ht: The hash table.
 *
 * Return: Nothing.
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int j;
	shash_node_t *node, *temp;

	if (!ht)
		return;
	for (j = 0; j < ht->size; ++j)
	{
		node = (ht->array)[j];
		while (node)
		{
			temp = node;
			node = node->next;
			free(temp->key);
			temp->key = NULL;
			free(temp->value);
			temp->value = NULL;
			free(temp);
		}
	}

	free(ht->array);
	ht->array = NULL;
	free(ht);
	ht = NULL;
}
