#include "main.h"
#include <stdio.h>

/**
 * clear_bit - function that sets the value of a bit to 0
 * @n: parameter 1
 * @index: parameter 2
 * Return: -1 and 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = ~(1UL << index);

	*n = *n & mask;

	return (1);
}
