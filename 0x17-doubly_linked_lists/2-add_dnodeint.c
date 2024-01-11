#include "lists.h"

/**
 * add_dnodeint - Adds a node at the begginning of a dlistint list.
 *
 * @head: Pointer to the head node.
 *
 * @n: Element of the new node.
 *
 * Return: Address of the new node (success), or NULL (failure).
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;

	return (new_node);
}
