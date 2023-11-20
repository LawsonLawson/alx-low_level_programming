#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at a given index in a linked list
 *
 * @head: A pointer to the head of the linked list
 *
 * @index: The index of the node to be deleted
 *
 * Return: 1 if successful, -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous;
	unsigned int x;
	listint_t *to_delete;

	/* Check if the head is NULL or the index is out of bounds */
	if (*head == NULL || index == 0)
	{
		if (*head != NULL)
		{
			/* Free head and update the it to the next node */
			listint_t *tmp = *head;
			*head = (*head)->next;
			free(tmp);
			return (1);
		}
		return (-1);/* Deletion is not possible if the head is NULL */
	}
	/* Traverse the list to the node before the one to be deleted */
	previous = *head;
	for (x = 0; x < index - 1 && previous != NULL; x++)
	{
		previous = previous->next;
	}
	/* Check if the index is out of bounds */
	if (previous == NULL || previous->next == NULL)
	{
		return (-1);
	}
	/* Store the node to be deleted and update the pointers */
	to_delete = previous->next;
	previous->next = to_delete->next;

	/* Free the node to be deleted */
	free(to_delete);

	return (1);/* Deletion successfull */
}
