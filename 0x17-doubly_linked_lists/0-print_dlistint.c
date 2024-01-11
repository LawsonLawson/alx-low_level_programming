#include "lists.h"

/**
 * print_dlistint - Prints all elements of a dlistint_t list.
 *
 * @h: Head node of dlistint_t.
 *
 * Return: Number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		number++;
	}

	return (number);
}
