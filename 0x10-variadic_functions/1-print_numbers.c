#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers
 * @separator: parameter 1
 * @n: parameter 2
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	int num;
	va_list args;

	va_start(args, n);

	for (x = 0 ; x < n ; x++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (x < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(args);
}
