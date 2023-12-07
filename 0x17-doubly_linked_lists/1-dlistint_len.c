#include "lists.h"

/**
 * dlistint_len -  function that returns the number of elements
 * @h: function parameter
 * Return: count
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
