#include "lists.h"

/**
 * print_listint_safe - function that prints a linked list
 * @head: points to the start of the linked list
 * Return: new node
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = NULL;
	const listint_t *last = NULL;
	size_t cts = 0;
	size_t nwn;

	temp = head;
	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		cts++;
		temp = temp->next;
		last = head;
		nwn = 0;
		while (nwn < cts)
		{
			if (temp == last)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (cts);
			}
			last = last->next;
			nwn++;
		}
		if (head == NULL)
			exit(98);
	}
	return (cts);
}
