#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add new node to the beginning of a linked list (integer).
 *
 * @head: previous nodes.
 * @n: integer/number of new node to be added.
 *
 * Return: address of new element, NULL if an error occurs.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
	}
	else
	{
		temp = *head;
		while ((*head)->next)
		{
			*head = (*head)->next;
		}
		new->next = NULL;
		(*head)->next = new;
		*head = temp;
	}

	return (*head);
}
