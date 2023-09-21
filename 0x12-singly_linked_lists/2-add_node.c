#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - add new node to the beginning of a linked list.
 *
 * @head: previous nodes.
 * @str: string of new node to be added.
 *
 * Return: address of new element, NULL on failure.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (*head);
}
