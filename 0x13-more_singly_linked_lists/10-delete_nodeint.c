#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index.
 * @head: head of a list.
 * @index: index of the list where the node is
 * deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *current;
	listint_t *next;

	current = *head;

	if (index != 0)
	{
		for (a = 0; a < index - 1 && current != NULL; a++)
		{
			current = current->next;
		}
	}

	if (current == NULL || (current->next == NULL && index != 0))
	{
		return (-1);
	}

	next = current->next;

	if (index != 0)
	{
		current->next = next->next;
		free(next);
	}
	else
	{
		free(current);
		*head = next;
	}

	return (1);
}
