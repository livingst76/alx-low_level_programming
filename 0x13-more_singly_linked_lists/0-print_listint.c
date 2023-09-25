#include <limits.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print all the elements of a linked list.
 *
 * @h: linked list.
 *
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *head = h;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}
	h = head;

	return (i);
}
