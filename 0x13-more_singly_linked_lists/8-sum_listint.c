#include "lists.h"

/**
 * sum_listint - Computes the sum of all the data (n) in a linked list
 *
 * @head: Pointer to the head of the linked list
 *
 * Return: Sum of all the data (n)
 */
int sum_listint(listint_t *head)
{
	/* Initialize total to 0 */
	int total = 0;

	/* Traverse the linked list and add the value of each node to total */
	while (head != NULL)
	{
		total += head->n;/* Add current node's value to the total */
		head = head->next;/* Move to the next node */
	}

	/* Return the computed total */
	return (total);
}
