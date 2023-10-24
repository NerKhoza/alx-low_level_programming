#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees a listint_t list
 * @head: function parameter
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *temp;

	while (current == NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
