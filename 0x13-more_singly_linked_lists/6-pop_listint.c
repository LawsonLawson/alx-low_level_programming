#include "lists.h"

/**
 * pop_listint - Deletes the head of node of a linked list
 *
 * @head: Pointer to the head of the list
 *
 * Return: The data of the deleted node
 */
int pop_listint(listint_t **head)
{
	int head_node_data;/* To store the date of the head node */
	listint_t *new_head;/* Pointer to the new head of the list */
	listint_t *current;/* Pointer to the current head node */

	/*Check if the list is empty */
	if (*head == NULL)
	{
		return (0);
	}
	/* Save the date of the current head node */
	current = *head;
	head_node_data = current->n;

	/* Set the new head of the list to the next node */
	new_head = current->next;

	/* Free the memory fo the current head node */
	free(current);
	/* Update the head pointer to the new head */
	*head = new_head;

	/* Return the date of the pointer to the new head node */
	return (head_node_data);
}
