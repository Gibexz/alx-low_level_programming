#include "lists.h"

/**
 * dlistint_len1 - funtion that returns the number of
 * elements in a linked dlistint_t list.
 * @h: head of the list
 *
 * Return: Number of elements in the list
 */
unsigned int dlistint_len1(const dlistint_t *h)
{
	unsigned int numElem = 0;

	while (h != NULL)
	{
		h = h->next;
		numElem++;
	}
	return (numElem);
}

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to dlistint head
 * @idx: index of new node
 * @n: number for new node
 *
 * Return: Address of newNode
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *newNode = malloc(sizeof(dlistint_t));
	unsigned int i = 0, len;

	newNode->n = n;
	len = dlistint_len1(*h);
	if (idx > len)
		return (NULL);

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	temp = *h;

	while (i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	if (!temp)
		return (NULL);

	newNode->next = temp->next;
	newNode->prev = temp;
	temp->next = newNode;
	newNode->next->prev = newNode;
	temp = newNode;

	return (temp);
}
