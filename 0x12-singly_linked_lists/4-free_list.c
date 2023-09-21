#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free the list
 *
 * @head: pointer to the list.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	if (!head)
		return;

	while (head->next)
	{
		free(head->str);
		tmp = head->next;
		free(head);
		head = tmp;
	}
	free(head->str);
	free(head);
}
