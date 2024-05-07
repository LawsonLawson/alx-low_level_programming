#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted singly linked list of
 * integers using linear skip.
 * @head: A pointer to the head of the linked list to search.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 * Otherwise, a pointer to the first node where the value is located.
 *
 * Description: This function implements the linear skip search algorithm to
 * search for a target value in a sorted singly linked list. It
 * prints a message every time a value is compared in the list.
 * If the value is found, it returns a pointer to the first node where the
 * value is located; otherwise, it returns NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *next_jump;

	if (list == NULL)
	{
		return (NULL);
	}

	for (current = next_jump = list; next_jump->next != NULL &&
			next_jump->n < value;)
	{
		current = next_jump;

		/* Check if express lane exists */
		if (next_jump->express != NULL)
		{
			next_jump = next_jump->express;
			printf("Value checked at index [%ld] = [%d]\n",
					next_jump->index, next_jump->n);
		}
		else /* If express lane doesn't exist, perform linear search */
		{
			while (next_jump->next != NULL)
				next_jump = next_jump->next;
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			current->index, next_jump->index);

	/* Linear search in the interval where the value is found */
	for (; current->index < next_jump->index && current->n < value;
			current = current->next)
		printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);

	 /* Return node if value found, otherwise NULL */
	return (current->n == value ? current : NULL);
}
