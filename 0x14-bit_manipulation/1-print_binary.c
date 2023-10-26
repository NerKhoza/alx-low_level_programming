#include "main.h"
#include <stdio.h>

/**
 * print_binary - function that prints the binary
 * @n: function parameter
 */

void print_binary(unsigned long int n)
{
	int i;

	int size = sizeof(unsigned long int) * 8;

	for (i = size - 1; i >= 0; i--)
	{
		if ((n & (1UL << i)) != 0)
			printf("1");
		else
			printf("0");
	}
}
