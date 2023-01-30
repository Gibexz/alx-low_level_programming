#include "lists.h"

/**
 * listint_len - function to return the number of elements
 * in a list
 * @h: pointer to head of the list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t num_elem = 0;

	while (h)
	{
		h = h->next;
		num_elem++;
	}
	return (num_elem);
}
