#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * list_t *add_node - function that adds a new node at the beginning
 * @head: parameter 1
 * @str: parameter 2
 * Return: NULL and head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int x, count = 0;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);

	for (x = 0 ; str[x] != '\0' ; x++)
		count++;

	newnode->len = count;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
