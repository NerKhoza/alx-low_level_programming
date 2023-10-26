#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function that converts a binary number
 * @b: function parameter
 * Return: 0 and result
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		result = (result << 1) | (*b - '0');
		b++;
	}
	return (result);
}
