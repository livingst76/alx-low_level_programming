#include <stdlib.h>
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

	if (!head && !*head)
	{
		return (NULL);
	}

	tmp = *head;
	while (i <= idx)
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
			*head = index_t;
			new->n = n;
			new->next = index_t->next;
			(*head)->next = new;
			*head = tmp;
			return (new);
		}
		index_t = *head;
		*head = (*head)->next;
		i++;
	}

	return (NULL);
}
