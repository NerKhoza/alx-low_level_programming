#include "main.h"

/**
 * int _strspn - function that gets the length of a prefix substring
 * @s: parameter 1
 * @accept: parameter 2
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int y;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (y = 0; s[i] != accept[y] ; y++)
		{
			if (accept[y] == '\0')
				return (i);
		}
	}
	return (0);
}
