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
	dlistint_t *node = head;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (i < index && node)
	{
		node = node->next;
		i++;
	}

	if (!node)
		return (NULL);

	return (node);
}
