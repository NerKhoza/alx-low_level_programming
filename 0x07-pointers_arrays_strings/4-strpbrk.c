#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: parameter 1
 * @accept: parameter 2
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			return (s);
			a++;
		}
		s++;
	}
	return (0);
}
