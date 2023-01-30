#include "main.h"

/**
 * free_listint - funtion to free a list of memory locations
 * @head: pointer to the head of the list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->n);
		free(temp);
	}
}
