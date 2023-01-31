#include "lists.h"

/**
 * insert_nodeint_at_index -  function that inserts a new
 * node at a given position.
 * @head: pointer to the head of the list
 * @idx: index valuse (position) of the new node
 * @n: data to be stored in new node
 * Return:  the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int j, i = 0;

	j = idx - 1;
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	temp = *head;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (*head)
	{
		if (i == j)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
		i++;
	}
	return (NULL);
}
