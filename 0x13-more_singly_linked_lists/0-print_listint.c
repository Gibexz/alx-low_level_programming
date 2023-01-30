#include "lists.h"

/**
 * print_listint - print the all elements in the list
 * @h: pointer to the head of the list
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
