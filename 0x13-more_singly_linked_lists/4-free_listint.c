#include "lists.h"

/**
 * free_listint - Frees a linked list
 *
 * @head: Pointer to the head fo the list
 *
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *tmp;

	/* Traverse the list */
	while (current != NULL)
	{
		/* Save the reference to the current node */
		tmp = current;

		/* Move to the next node before freeing the current one */
		current = current->next;

		/* free the current node */
		free(tmp);
	}
}
