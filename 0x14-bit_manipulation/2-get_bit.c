#include "main.h"
#include <stdio.h>

/**
 * get_bit - function that returns the value of a bit
 * @n: parameter 1
 * @index: parameter 2
 * Return: integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	int bit;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;
	bit = (n & mask) ? 1 : 0;

	return (bit);
}
