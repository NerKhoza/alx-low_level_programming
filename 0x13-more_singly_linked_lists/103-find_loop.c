#include "lists.h"

/**
 * find_listint_loop - function that finds the loop
 * @head: function parameter
 * Return: tortoise and NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise;
	listint_t *hare;

	if (head == NULL || head->next == NULL)
	{
		return (NULL);
	}

	tortoise = head;
	hare = head;

	while (hare != NULL && hare->next != NULL)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			tortoise = head;

			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (tortoise);
		}
	}
	return (NULL);
}
