#include "lists.h"

/**
 * dlistint_len - funtion that returns the number of
 * elements in a linked dlistint_t list.
 * @h: head of the list
 *
 * Return: Number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t numElem = 0;

	while (h != NULL)
	{
		h = h->next;
		numElem++;
	}
	return (numElem);
}
