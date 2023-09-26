#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index in linked list.
 *
 * @head: pointer to the memory address of linked list.
 * @index: index of node to be deleted.
 *
 * Return: 1 success, -1 failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *index_t, *index_u, *tmp;

	if (!head || !*head)
	{
		return (-1);
	}

	tmp = *head;
	while (i <= index && *head)
	{
		if (i + 1 == index)
		{
			index_t = (*head)->next;
			index_u = (*head)->next;
			index_u = index_u->next;
			(*head)->next = index_u;
			free(index_t);
			*head = tmp;
			return (1);
		}
		else if (i == index && !i)
		{
			*head = (*head)->next;
			free(tmp);
			return (1);
		}
		*head = (*head)->next;
		i++;
	}

	return (-1);
}
