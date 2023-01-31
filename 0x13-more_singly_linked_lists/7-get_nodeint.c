#include "lists.h"

/**
 * get_nodeint_at_index - function hat returns the nth node of a
 * listint_t linked list
 * @index: nth node index
 * @head: pointer to the start of the list
 *
 * Return: pointer the nth node or NULL if it does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
