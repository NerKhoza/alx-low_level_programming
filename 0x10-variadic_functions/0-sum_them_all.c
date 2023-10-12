#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that calculates the sum of all parameters
 * @n: function parameter
 * Return: 0 and sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int sum;
	int value;
	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	sum = 0;

	for (x = 0 ; x < n ; x++)
	{
		value = va_arg(args, int);
		sum += value;
	}

	va_end(args);

	return (sum);
}
