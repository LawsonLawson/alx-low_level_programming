#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 *
 * @head: Pointer to the first node of the list.
 *
 * @index: Index to retrive the node.
 *
 * Return: The nth node (success), NULL if the index is out of range.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	size_t node_num = 0;

	/* Check if the list is empty */
	if (head == NULL)
		return (NULL);

	/* Start from the head of the list */
	current = head;

	/* Traverse the list to the specified index */
	while (current && node_num < index)
	{
		current = current->next;
		node_num++;
	}
	/* Return the nth node or NULL if the index is out of range */
	return (current);
}
