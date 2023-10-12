#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings
 * @separator: parameter 1
 * @n: parameter 2
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	const char *str;
	va_list args;

	va_start(args, n);

	for (x = 0 ; x < n ; x++)
	{
		str = va_arg(args, const char*);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (x < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(args);
}
