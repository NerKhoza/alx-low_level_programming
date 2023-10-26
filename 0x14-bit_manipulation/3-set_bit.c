#include "main.h"
#include <stdio.h>

/**
 * set_bit - function that changes the value of a bit
 * @n: parameter 1
 * @index: parameter 2
 * Return: -1 and 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= (1UL << index);
	return (1);
}
