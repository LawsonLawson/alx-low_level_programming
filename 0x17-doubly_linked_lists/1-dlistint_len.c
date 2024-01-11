#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list.
 *
 * @h: Pointer to the head node.
 *
 * Return: Number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t number = 0;

	while (h)
	{
		h = h->next;
		++number;
	}

	return (number);
}
