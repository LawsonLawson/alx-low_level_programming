#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a list
 *
 * @head: Pointer to the head of the list
 *
 * @idx: Index where the new node is to be inserted
 *
 * @n: Integer element for the new node
 *
 * Return: The address of the new node, or NULL if failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *new_node, *current;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	/* Set the date for the new node */
	new_node->n = n;
	/* Insert at the beginning of the list if the index is 0 */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	/* Traverse the list to the node before the insertion point */
	current = *head;
	for (x = 0; x < idx - 1 && current != NULL; x++)
	{
		current = current->next;
	}
	/* If the index it out of bounds, free the new node and return NULL */
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	/* Insert the new node at the specified index */
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
