#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - delete the head of note and get its data (n).
 *
 * @head: pointer to the memory address of linked list.
 *
 * Return: head node's data (n).
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *tmp;

	if (!head || !*head)
	{
		return (data);
	}

	data = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (data);
}
