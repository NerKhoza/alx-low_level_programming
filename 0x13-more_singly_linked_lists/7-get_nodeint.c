#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth
 * @head: parameter 1
 * @index: parameter 2
 * Return: NULL and current
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i = 0;

	while (current != NULL)
	{
		if (i == index)
		{
			return (current);
		}
		current = current->next;
		i++;
	}
	return (NULL);
}
