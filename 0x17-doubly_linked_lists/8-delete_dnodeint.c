#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a particular index.
 *
 * @head: Double pointer to the head node.
 *
 * @index: Index of the node to delete.
 *
 * Return: 1 if deletion was a success, -1 if deletion failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	size_t counts = 0;

	/* Check if the list is empty */
	if (*head == NULL)
		return (-1);
	current = *head;
	/* If index is 0, delete the first node */
	if (index == 0)
	{
		if (current->next != NULL)
		{
			*head = (current)->next;
			(*head)->prev = NULL;
			free(current);
		}
		else
		{
			free(*head);
			*head = NULL;
		}
		return (1);
	}
	/* Traverse the list to the specified index */
	while (current && counts < index)
	{
		current = current->next;
		counts++;
	}
	/* If current is NULL, index is out of range */
	if (current == NULL)
		return (-1);
	/* Save the current node in a temporary variable */
	temp = current;
	/* Update pointers to skip the current node in the linked list */
	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(temp);/* Free the memory of the deleted node */
	return (1);
}
