#include "function_pointers.h"

/**
 * print_name - prints the name of a function
 * @f: parameter 1
 * @name: parameter 2
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
