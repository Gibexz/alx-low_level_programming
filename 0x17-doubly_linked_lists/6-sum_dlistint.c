#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the
 *		data (n) of a dlistint_t linked list.
 *
 * @head: head of dlistint
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *h;

	if (!head)
		return (sum);

	h = head;
	while (h)
	{
		sum += h->n;
		h = h->next;
	}

	return (sum);
}
