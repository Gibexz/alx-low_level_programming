#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * and returns the head node
 * @head: pointer to the head of the list
 *
 * Return: value if the deleted head node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}
