#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 *
 * @head: dlist head
 * @index: index of node to return
 *
 * Return: node at index
 *
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	temp = head;
	if (!head)
		return (NULL);

	while (i < index)
	{
		temp = temp->next;
		i++;
	}

	if (!temp)
		return (NULL);

	return (temp);
}
