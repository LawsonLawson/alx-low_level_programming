#include "lists.h"

/**
 * insert_dnodeint_at_index - Adds a node at a particular index in a doubly
 * linked list.
 *
 * @h: Double pointer to the head node.
 *
 * @idx: Index to add the new node.
 *
 * @n: Data of the new node.
 *
 * Return: Address of the new node (success), NULL on (failure).
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *temp, *new_node;
	size_t counts = 0;

	/* Check for NULL pointer to the head */
	if (h == NULL)
		return (NULL);
	/* If the list is empty or index is 0,add new node at the beginnning */
	if (*h == NULL || idx == 0)
		return (add_dnodeint(h, n));
	/* Traverse the list to find the last node and get the count */
	current = *h;
	for (counts = 0; current->next; counts++)
	{
		current = current->next;
	}
	if (idx == counts + 1)
		return (add_dnodeint_end(h, n));
	else if (idx > counts + 1)
		return (NULL);
	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	/* Reset current to the head and traverse to the node before index */
	current = *h;
	counts = 0;
	while (current && counts < idx - 1)
	{
		current = current->next;
		++counts;
	}
	/* Set data update pointers to insert the new node */
	new_node->n = n;
	temp = current->next;
	current->next = new_node;
	new_node->prev = current;
	new_node->next = temp;
	temp->prev = new_node;
	/* Return  the address of the new node */
	return (new_node);
}
