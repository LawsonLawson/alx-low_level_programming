#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	const list_t *point = h;
	size_t count = 0;

	if (point == NULL)
	{
		return (0);
	}

	while (point != NULL)
	{
		if (point->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", point->len, point->str);
		}

		count++;
		point = point->next;
	}

	return (count);
}
