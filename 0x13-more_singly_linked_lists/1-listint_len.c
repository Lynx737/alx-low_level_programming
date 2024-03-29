#include "lists.h"

/**
 * listint_len - returns the number of elements in
 * a linked list.
 * @h: head of the list(linked).
 *
 * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		h = h->next;
		node++;
	}
	return (node);
}
