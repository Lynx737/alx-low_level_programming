#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 *
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pas;
	listint_t *pre;

	pas = head;
	pre = head;
	while (head && pas && pas->next)
	{
		head = head->next;
		pas = pas->next->next;

		if (head == pas)
		{
			head = pre;
			pre =  pas;
			while (1)
			{
				pas = pre;
				while (pas->next != head && pas->next != pre)
				{
					pas = pas->next;
				}
				if (pas->next == head)
					break;

				head = head->next;
			}
			return (pas->next);
		}
	}

	return (NULL);
}
