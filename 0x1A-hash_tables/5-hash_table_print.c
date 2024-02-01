#include "hash_tables.h"

/**
 * hash_table_print - Prints the key-value pairs of a hash table.
 *
 * @ht: Pointer to the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	char *signal = "";
	hash_node_t *node;
	unsigned long int i;

	/* Check if the hash table is NULL */
	if (!ht)
		return;

	/* Print the opening curly brace for the hash table */
	putchar('{');

	/* Iterate through each index in the hash table array */
	for (i = 0; i < ht->size; ++i)
	{
		/* Get the node at the current index */
		node = (ht->array[i]);

		/* If the node is not NULL, traverse the linked list */
		if (node != NULL)
		{
			while (node)
			{
				/* Print the key-value pair */
				printf("%s'%s': '%s'", signal, node->key, node->value);
				signal = ", ";
				node = node->next;
			}
		}

	}

	/* Print the closing curly brace for the hash table */
	puts("}");
}


