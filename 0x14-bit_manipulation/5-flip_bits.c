#include "main.h"

/**
 * flip_bits - a function that flips a bit
 * @n: parameter 1
 * @m: parameter 2
 * Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count;

	count = 0;

	while (xor_result > 0)
	{
		if (xor_result & 1)
		{
			count++;
		}
		xor_result >>= 1;
	}
	return (count);
}
