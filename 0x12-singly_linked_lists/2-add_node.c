#include "lists.h"

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
 * add_node - adds new node at the beginning of a list_t list
 *
 * @head: pointer to the head
 *
 * @str: the string
 *
 * Return: the address of new element of NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	char *dup;

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
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
