#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function that frees a list_t
 * @head: function parameter
 */

void free_list(list_t *head)
{
	list_t *current = head;

	while (current != NULL)
	{
		list_t *next = current->next;

		free(current);
		current = next;
	}
	head = NULL;
}
