#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *tem;
	listint_t *recent;

	if (head != NULL)
	{
		recent = *head;
		while ((tem = recent) != NULL)
		{
			recent = recent->next;
			free(tem);
		}
		*head = NULL;
	}
}
