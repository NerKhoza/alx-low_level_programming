#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - prints the name of a function
 * @f: parameter 1
 * @name: parameter 2
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
