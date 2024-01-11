#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of a dlistint_t linked
 * list.
 *
 * @head: Head of the doubly linked list.
 *
 * Return: Sum of the date.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	/* Check if the list is empty */
	if (head == NULL)
		return (0);

	/* Traverse the list and accumulate the sum of data */
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	/* Return the calculated sum */
	return (sum);
}
