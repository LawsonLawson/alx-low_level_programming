#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of the linked list
 *
 * @head: Pointer to the head of the linked list
 *
 * @index: Index of the node to retrieve
 *
 * Return: Pointer to the nth node. If the node does not exisit, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* Initialize a variable to track the current index */
	unsigned int current_index = 0;

	/* Traverse the list until the desired index or the end is reached */
	while (current_index < index && head != NULL)
	{
		head = head->next;/* Move to the next node */
		current_index++;/* Increment the current index */
	}

	/* If the desired index is reached, return the node */
	return (head);
}
