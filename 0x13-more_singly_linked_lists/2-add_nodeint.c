#include "lists.h"

/**
 * add_nodeint - function that adds a new node
 * @head: parameter 1
 * @n: parameter 2
 * Return: NULL and new_node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
