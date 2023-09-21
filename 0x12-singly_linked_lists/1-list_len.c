#include "lists.h"

/**
 * list_len - get the number of elements in a linked list.
 *
 * @h: linked list
 *
 * Return: number of elements in linked list.
 */
size_t list_len(const list_t *h)
{
	const list_t *head = h;
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}

	h = head;

	return (len);
}
