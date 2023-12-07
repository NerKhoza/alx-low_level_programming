#include "lists.h"

/**
 * print_dlistint - a funcion that prints a doubly linked list
 * @h: function parameter
 * Return: node_count
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count;

	node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}
	return (node_count);
}
