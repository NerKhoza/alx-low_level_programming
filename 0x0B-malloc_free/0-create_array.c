#include "main.h"
#include <stdlib.h>

/**
 * create_array -  function that creates an array
 * @size: parameter 1
 * @c: parameter 2
 * Return: NULL and Carry
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *Carry = (char *)malloc(size * sizeof(char));

	if (Carry == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		Carry[i] = c;
	}
	return (Carry);
}
