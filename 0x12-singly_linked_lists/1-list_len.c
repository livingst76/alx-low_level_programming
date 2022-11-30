#include "lists.h"
#include <stdio.h>

/**
 * list_len - find the number of elements in a linked list
 *
 * @h: head of the list (nodes)
 *
 * Return: the number of nodes (elements).
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	if (!h)
		return (0);

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
