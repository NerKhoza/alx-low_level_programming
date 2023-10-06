#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - array of integers
 * @min: parameter 1
 * @max: parameter 2
 * Return: NULL and result
 */

int *array_range(int min, int max)
{
	int elements;
	int *result;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	elements = max - min + 1;

	result = (int *)malloc(elements * sizeof(int));

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < elements ; i++)
	{
		result[i] = min + i;
	}
	return (result);
}
