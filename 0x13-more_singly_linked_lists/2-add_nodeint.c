#include "lists.h"

/**
 * add_nodeint - function that adds a node at the start of a list
 * @head: pointer to the head of the list
 * @n:  int value to be stored in new nodes
 * Return: pointer to new head of the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
