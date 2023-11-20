#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 *
 * @head: Pointer to the head of of the list
 *
 * Return: Pointer to the new head of the reveresed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;/* Previous node */
	listint_t *next = NULL;/* Next node */

	while (*head != NULL)
	{
		next = (*head)->next;/* Save the next node */
		(*head)->next = previous;/* Reverse the link */

		previous = *head;/* Move to the next nodes */
		*head = next;
	}

	*head = previous;/* Update the head of the new first node */
	return (*head);
}
