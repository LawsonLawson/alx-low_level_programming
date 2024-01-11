#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 *
 * @head: Pointer to the head node.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}

/**
 * add_dnodeint - Adds a node at th beggining of a dlistint.
 *
 * @head: Pointer to the head node.
 *
 * @n: Element of the new node.
 *
 * Return: Address of the new node(success), or NULL(failure).
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	/* Set the date pointers for the new node */
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	/* Update the head to point to the new node */
	*head = new_node;

	/* Return the address of the new node */
	return (new_node);
}
