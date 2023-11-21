#include "lists.h"

/**
 * print_listint_safe - Prints a linkded list while handling cycles safely
 *
 * @head: Pointer to the head of the linked list
 *
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t number = 0;

	while (head != NULL)
	{
		/* Print the current node's address and value */
		printf("[%p] %d\n", (void *)head, head->n);
		number++;

		/* Check for the cycle in the linked list */
		if (head <= head->next)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}

		/* Move to the next node */
		head = head->next;
	}

	return (number);
}
