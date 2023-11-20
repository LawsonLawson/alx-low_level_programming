#include "lists.h"

/**
 * add_nodeint_end - Adds a node to the end of a linked list
 *
 * @head: Pointer to the head of the first list
 *
 * @n: Number to be used as content
 *
 * Return: Address of the newly added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);/* fail */
	}
	/* set the value of the new node */
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)/* check if list is empty */
	{
		*head = new_node;/*if yes, then new node becomes the head */
	}
	else
	{
		/* if list isn't empty, then go the the end of it */
		listint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		/* add new node */
		current->next = new_node;
	}

	return (new_node);/* return address of new node */
}
