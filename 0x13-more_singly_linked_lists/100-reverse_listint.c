#include <stddef.h>
#include "lists.h"

/**
 * reverse_listint - reverse a linked list.
 *
 * @head: head node of list.
 *
 * Return: pointer to first node of reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev;

	prev = next = NULL;

	while (*head && head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;
	return (*head);
}
