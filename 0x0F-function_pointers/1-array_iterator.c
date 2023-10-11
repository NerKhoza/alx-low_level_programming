#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function that executes a function
 * @array: parameter 1
 * @size: size of array
 * @action: pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (action == NULL || array == NULL)
	{
		return;
	}
	for (x = 0 ; x < size ; x++)
	{
		action(array[x]);
	}
}
