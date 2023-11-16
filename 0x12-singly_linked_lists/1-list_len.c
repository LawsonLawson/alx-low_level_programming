#include "lists.h"

/**
 * list_len - finds number of elements in a linked list
 *
 * @h: pointer to the list
 *
 * Return: address of the new element or NULL if it is false
 */
size_t list_len(const list_t *h)
{
	const list_t *point = h;
	size_t count = 0;

	if (point == NULL)
	{
		return (1);
	}
	while (point != NULL)
	{
		count++;
		point = point->next;
	}

	return (count);
}
