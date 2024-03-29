#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free allocated memory of linked list.
 *
 * @head: pointer address of linked list head.
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head)
	{
		return;
	}

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	free(*head);
}
