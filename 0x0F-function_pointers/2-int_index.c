#include "function_pointers.h"


/**
 * int_index -  function that searches for an integer
 * @array: array to be searched
 * @size: size of an array
 * @cmp: function pointer
 * Return: -1 and 1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	for (x = 0 ; x < size ; x++)
	{
		if (cmp(array[x]) != 0)
		{
			return (x);
		}
	}

	return (-1);
}
