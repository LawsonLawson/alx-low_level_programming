#include "lists.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: parameter or argument
 *
 * Return: length of a string
 */
unsigned int _strlen(const char *s)
{
	unsigned int counts = 0;

	while (*s != '\0')
	{
		s++;
		counts++;
	}

	return (counts);
}

/**
 * add_node_end - Adds a new node a the end of a list
 *
 * @head: pointer to the head of the list
 *
 * @str: string to be added to the list
 *
 * Return: NULL if failed , address of element if successfull
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *tail;
	char *dup;

	tail = *head;
	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	dup = strdup(str);

	if (dup == NULL)
	{
		free(newNode);

		return (NULL);
	}
	newNode->str = dup;
	newNode->len = _strlen(dup);
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newNode;
	}

	return (*head);
}

