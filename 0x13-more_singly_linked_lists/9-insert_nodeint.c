#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: parameter 1
 * @idx: parameter 2
 * @n: parameter 3
 * Return: NULL and new_node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *current;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;

	for (i = 0; current != NULL && i < idx - 1; i++)
	{
		current = current->next;
	}

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}

/**
 * print_list - function that inserts
 * @head: function parameter
 */

void print_list(listint_t *head)
{
	listint_t *current = head;

	while (current != NULL)
	{
		printf("%d -> ", current->n);
		current = current->next;
	}
	printf("NULL\n");
}
