#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that deletes the head node
 * @head: function parameter
 * Return: 0 and data
 */

int pop_listint(listint_t **head)
{
	listint_t *current_head = *head;
	int n = current_head->n;

	if (*head == NULL)
	{
		return (0);
	}

	*head = current_head->next;
	free(current_head);

	return (n);
}
