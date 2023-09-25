#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free allocated memory of linked list.
 *
 * @head: address of linked list head.
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
