#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. 
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *recent;
	listint_t *temp;

	(void)temp;

	recent = malloc(sizeof(listint_t));

	if (recent == NULL)
		return (NULL);

	recent->n = n;
	recent->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = recent;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = recent;
	}

	return (*head);
}
