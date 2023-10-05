#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: parameter 1
 * @size: parameter 2
 * Return: NULL and ptr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int size1;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	size1 = nmemb * size;
	ptr = malloc(size1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	memset(ptr, 0, size1);
	return (ptr);
}
