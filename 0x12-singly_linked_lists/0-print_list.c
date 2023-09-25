#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all the elements of a linked list.
 *
 * @h: linked list.
 *
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *head = h;

	while (h)
	{
		if (h->str)
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		i++;
	}
	h = head;

	return (i);
}
