#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node
 * @head: function parameter 1
 * @index: function parameter 2
 * Return: 1 and -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *previous;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	current = *head;
	previous = (NULL);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	while (index > 0 && current != NULL)
	{
		previous = current;
		current = current->next;
		index--;
	}

	if (current == NULL)
	{
		return (-1);
	}

	previous->next = current->next;
	free(current);
	return (1);
}
