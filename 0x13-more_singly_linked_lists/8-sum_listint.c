#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the
 * data (n) of a listint_t linked list
 * @head: pointer to the start of the list
 * Return: SUM of data's
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum = sum + (head->n);
		head = head->next;
	}
	return (sum);
}
