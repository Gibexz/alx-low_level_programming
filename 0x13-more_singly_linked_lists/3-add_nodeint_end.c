#include "lists.h"

/**
 * add_nodeint_end - funtion to add nodes nodes at the end
 * of a list
 * @head: listint_t pointer to the head of the list
 * @n: value to be stored in the node
 *
 * Return: pointer to new nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (*head == NULL)
	{
	new->next = *head;
	*head = new;
	}
	else
	{
		new->next = NULL;
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
