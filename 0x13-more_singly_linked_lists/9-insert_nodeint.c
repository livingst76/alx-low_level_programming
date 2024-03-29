#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node at the given index in linked list.
 *
 * @head: pointer to linked list.
 * @idx: index to be inserted to starting at 0.
 * @n: data of new node.
 *
 * Return: node at index, NULL if node does not exist.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *index_t, *new;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}

	if (head == NULL)
	{
		return (NULL);
	}

	tmp = *head;
	while ((i <= idx && tmp) || (!tmp && i == 0))
	{
		if (i == idx && !i)
		{
			new->n = n;
			new->next = *head;
			*head = new;
			return (new);
		}
		else if (i == idx)
		{
			tmp = index_t;
			new->n = n;
			new->next = index_t->next;
			(tmp)->next = new;
			return (new);
		}
		index_t = tmp;
		tmp = (tmp)->next;
		i++;
	}
	return (NULL);
}
