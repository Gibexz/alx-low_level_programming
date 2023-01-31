#include  "lists.h"

/**
 * print_listint_safe - print list
 * @head: Pointer to
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *one = head, *two = head;

	if(head == NULL)
		exit(98);

	while (head && one && two && two->next)
	{
		one = one->next;
		two = two->next->next;

		if (one == two)
		{
			 printf("[%p] %d\n", (void *)head, head->n);
			 exit(98);
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}

	return (nodes);
}
