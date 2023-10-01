#include <limits.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - print all elements of a linked list; handle loop cases.
 *
 * @h: linked list.
 *
 * Return: number of nodes.
 */
size_t print_listint_safe(const listint_t *h)
{
	size_t count = 0;
	const listint_t *tmp, *head, *array[10000];
	is_loop_t is_loop_n;
	int status = 0;

	head = tmp = h;
	is_loop_n = is_loop(tmp, array);

	while (h)
	{
		if (is_loop_n._bool && h == array[is_loop_n.index])
		{
			status++;
		}

		if (status > 1)
		{
			break;
		}

		printf("[%p] %i\n", (void *) h, h->n);
		h = h->next;
		count++;
	}

	if (is_loop_n._bool)
	{
		printf("-> [%p] %i\n", (void *) array[is_loop_n.index],
		   array[is_loop_n.index]->n);
	}

	h = head;
	return (count);
}

/**
 * is_loop - check for loop in linked list.
 *
 * @tmp: temporary storage of linked list.
 * @array: array of elements traversed in a linked list.
 *
 * Return: linked list status.
 */
is_loop_t is_loop(const listint_t *tmp, const listint_t **array)
{
	is_loop_t loop;
	int i = 0, n = 0;

	loop._bool = 0;
	loop.index = 0;

	while (tmp)
	{
		for (i = 0; i < n; i++)
		{
			if (tmp == array[i])
			{
				loop._bool = 1;
				loop.index = i;
				return (loop);
			}
		}

		array[n] = tmp;
	    tmp = tmp->next;
		n++;
	}

	return (loop);
}
