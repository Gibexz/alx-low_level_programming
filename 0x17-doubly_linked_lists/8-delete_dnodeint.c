#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of
 *				a dlistint_t linked list.
 *
 * @head: head of dlistint
 * @index: index of node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int cnt;

	if (!head || !current)
		return (-1);

	if (index == 0)
	{
		current = current->next;
		free(*head);
		*head = current;
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}
	for (cnt = 0; current; cnt++)
	{
		if (cnt == index)
		{
			if (current->next)
			{
				(current->prev)->next = current->next;
				(current->next)->prev = current->prev;
				free(current);
				return (1);
			}
			else
			{
				(current->prev)->next = NULL;
				free(current);
				return (1);
			}
		}
		current = current->next;
	}

	return (-1);
}
