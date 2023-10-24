#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything
 * @format: parameter 1
 */

void print_all(const char * const format, ...)
{
	char c;
	int i;
	float f;
	char *s;
	va_list args;

	va_start(args, format);
	while (*format)
	{
		if (*format == 'c')
			c = va_arg(args, int);
			printf("%c", c);
		else if (*format == 'i')
			i = va_arg(args, int);
			printf("%d", c);
		else if (*format == 'f')
			f = va_arg(args, double);
			printf("%f", f);
		else if (*format == 's')
		{
			s = va_arg(args, char*);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
		}
	}
	format++;
	va_end(args);
	printf("\n");
}
