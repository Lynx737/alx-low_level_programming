#include "lists.h"

/**
 * sum_listint - returns the sum of all the data provided
 * @head: head of a list.
 *
 * Return: sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int add=0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}
