#include "lists.h"
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add a new node to the beginning of a list
 *
 * @head: pointer to the address  of the head node
 * @str: string (text) of the new node
 *
 * Return: Address of the new element, NULL on failure.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len = 0;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}

	if (str)
	{
		new->str = strdup(str);
		while (str[len])
			len++;
	}
	else
	{
		new->str = NULL;
	}
	new->len = len;
	new->next = *head;
	*head = new;
	return (*head);
}
