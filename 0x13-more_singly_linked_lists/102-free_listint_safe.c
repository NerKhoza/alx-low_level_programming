#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t
 * @h: funtion parameter
 * Return: 0 and size
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *temp;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}

	current = *h;

	while (current != NULL)
	{
		size++;
		temp = current;
		current = current->next;
		free(temp);
	}
	*h = NULL;
	return (size);
}
