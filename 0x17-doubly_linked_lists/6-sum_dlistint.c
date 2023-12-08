#include "lists.h"

/**
 * sum_dlistint - function that returns the sum
 * @head: function parameter
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
