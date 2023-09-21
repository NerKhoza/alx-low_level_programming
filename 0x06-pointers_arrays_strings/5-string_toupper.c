#include "main.h"

/**
 * string_toupper - function that changes all lowercase to uppercase
 * @y: function parameter
 * Return: string
 */

char *string_toupper(char *y)
{
	int x;

	for (x = 0 ; y[x] != '\0' ; x++)
	{
		if (y[x] >= 'a' && y[x] <= 'z')
		{
			y[x] = y[x] - 32;
		}
	}
	return (y);
}
