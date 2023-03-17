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
	int sum = 0, i = 0;
	dlistint_t *temp;

	if (!head)
		return (sum);

	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
		i++;
	}

	return (sum);
}
