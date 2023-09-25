#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get the node at the given index in a linked list.
 *
 * @head: pointer to linked list.
 * @index: index to be searched for starting at 0.
 *
 * Return: node at index, NULL if node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp, *index_t;
	unsigned int i = 0;

	tmp = head;
	while (i <= index && head)
	{
		if (i == index)
		{
			index_t = head;
			head = tmp;
			return (index_t);
		}
		head = head->next;
		i++;
	}

	return (NULL);
}
