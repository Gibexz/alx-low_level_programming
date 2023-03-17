#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 *
 * @head: head node
 *
 * Return: void
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	while (temp->next)
	{
		temp = temp->next;
		free(temp);
	}
	free(head);
}
