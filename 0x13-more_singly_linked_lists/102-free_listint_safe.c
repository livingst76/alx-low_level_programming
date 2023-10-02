#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - free memory of linked list; handle loop cases.
 *
 * @h: linked list.
 *
 * Return: size of list that was free'd.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *array[10000];
	int is_loop = 0, i = 0, n = 0;

	while (*h)
	{
		current = (*h)->next;
		for (i = 0; i < n; i++)
		{
			if ((*h)->next == array[i])
			{
				free(*h);
				*h = NULL;
				is_loop = 1;
				size += sizeof(*h);
				return (size);
			}
		}

		size += sizeof(*h);
		array[n] = *h;
		free(*h);
		*h = current;
		n++;
	}

	return (size);
}
