#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a linked list
 *
 * @h: head of the list (nodes)
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	if (!h)
		return (0);

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
