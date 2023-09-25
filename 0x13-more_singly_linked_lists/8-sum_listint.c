#include <stddef.h>
#include "lists.h"

/**
 * sum_listint - sum all of integer data in linked list.
 *
 * @head: linked list.
 *
 * Return: result of addition.
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp = head;
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	head = tmp;

	return (sum);
}
