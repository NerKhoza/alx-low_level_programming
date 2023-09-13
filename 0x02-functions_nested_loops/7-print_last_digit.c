#include "main.h"

/**
 * print_last_digit - function that checks the last value of a number
 * @y: function parameter
 * Return: z
 */

int print_last_digit(int y)
{
	int z;

	z = y % 10;
	if (z < 0)
		z = -z;
	_putchar(z + '0');
	return (z);
}
