#include "lists.h"
/**
 * add_node - adds a new node at the start of the list
 *
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t can;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (can = 0; str[can]; can++)
		;

	new->len = can;
	new->next = *head;
	*head = new;

	return (*head);
}
