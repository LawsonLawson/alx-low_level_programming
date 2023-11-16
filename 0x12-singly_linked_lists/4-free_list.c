#include "lists.h"

/**
 * free_list - Fress a list
 *
 * @head: A pointer to the list head
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;

		free(tmp->str);
		free(tmp);
	}
}
