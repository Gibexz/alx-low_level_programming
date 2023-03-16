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
	dlistint_t *remnant;

	while (head)
	{
		remnant = head;
		head = remnant->next;
		free(remnant);
	}
}
