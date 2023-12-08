#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * @head: parameter 1
 * @index: parameter 2
 * Return: NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL && i < index; i++)
	{
		head = head->next;
	}

	if (i < index || head == NULL)
	{
		return (NULL);
	}
	return (head);
}
