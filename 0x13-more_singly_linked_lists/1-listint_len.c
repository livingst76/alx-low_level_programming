#include "lists.h"

/**
 * listint_len - get the number of nodes in a linked list.
 *
 * @h: linked list.
 *
 * Return: number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;
	const listint_t *head = h;

	while (h)
	{
		h = h->next;
		len++;
	}
	h = head;

	return (len);
}
