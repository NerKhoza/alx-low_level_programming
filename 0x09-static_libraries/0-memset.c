#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: parameter 1
 * @b: parameter 2
 * @n: parameter 3
 * Return: string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0 ; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
