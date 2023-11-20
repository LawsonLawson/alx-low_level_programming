#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list
 *
 * @head: A pointer to the address of the head of the listint_t list
 *
 * @n: The integer for the new node to contain
 *
 * Return: NULL if function fails, or the address fo the new element (success)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	/* Allocate memory fo the new node to be added */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	/* Inititalize the new node with a given value */
	new_node->n = n;
	new_node->next = *head;

	/* Update the head to point to the new node */
	*head = new_node;

	return (new_node);/* Return the address */
}

