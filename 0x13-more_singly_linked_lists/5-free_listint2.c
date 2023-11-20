#include "lists.h"

/**
 * free_listint2 - Frees a linked list and sets the head NULL
 * @head: Pointer to the head of the list
 *
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *tmp;

	/* check if the input pointer is NULL */
	if (head != NULL)
	{
		current = *head;
		/* Iterate through, free each node and move to the next one */
		while ((tmp = current) != NULL)
		{
			current = current->next;
			free(tmp);
		}

		/* Set the original head pointer to NULL */
		*head = NULL;
	}
}
