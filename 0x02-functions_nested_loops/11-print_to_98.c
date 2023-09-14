#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function that prints all natural numbers
 * @n: function parameter
 * Return: n
 */

void print_to_98(int n)
{
	int x;

	if (n >= 0 && n <= 98)
	{
		for (x = n ; x <= 98 ; x++)
		{
			printf("%d, ", x);
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (x = n ; x <= 98 ; x++)
		{
			printf("%d, ", x);
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (x = n ; x >= 98 ; x--)
		{
			printf("%d, ", x);
		}
		printf("\n");
	}
	else if (n == 98)
		printf("%d, ", n);
}
