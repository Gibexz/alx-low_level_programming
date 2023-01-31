#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes the node at
 * specified index from list
 * @head: A pointer to the list
 * @index: The index of the node to delete
 * Return: 1 id succesful or -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *dnode;
	unsigned int j = 1;

	if (head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	else
	{
		while (j < index)
		{
			temp = temp->next;
			if (temp == NULL)
				return (-1);
			j++;
		}
		dnode = temp;
		dnode = dnode->next;
		temp->next = dnode->next;
		free(dnode);
	}
	return (1);
}
