#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list.
 *
 * @head: Pointer to the head node of the list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		/* Save the current node in a temporary variable */
		temp = head;
		/* Move to the next node */
		head = head->next;
		/* Free the memory of the current node */
		free(temp);
	}
	/* No need to free (head) as it points to NULL */
}
