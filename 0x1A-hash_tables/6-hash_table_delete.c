#include "hash_tables.h"

/**
 * hash_table_delete - Free the memory used by a hash table.
 *
 * @ht: Pointer to the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp;
	unsigned long int j;

	/* Iterate through each index in the hash table array */
	for (j = 0; j < ht->size; ++j)
	{
		/* Get the node at the current index */
		node = (ht->array)[j];

		/* Traverse the linked list at the index and free each node */
		while (node)
		{
			temp = node;
			node = node->next;

			/* Free the key, value, and the node itself */
			free(temp->key);
			temp->key = NULL;
			free(temp->value);
			temp->value = NULL;
			free(temp);
			temp = NULL;
		}
	}
	/* Free the array and the hash table itself */
	free(ht->array);
	ht->array = NULL;
	free(ht);
	ht = NULL;
}
