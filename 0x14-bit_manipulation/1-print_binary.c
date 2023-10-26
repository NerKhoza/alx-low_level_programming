#include "main.h"
#include <stdio.h>

/**
 * print_bi - prints the binary
 * @n: function parameter
 */

void print_bi(unsigned long int n);

void print_bi(unsigned long int n)
{
	if (n == 0)
		return;
	print_bi(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}

/**
 * print_binary - function that prints the binary
 * @n: function parameter
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		print_bi(n);
	}
}
