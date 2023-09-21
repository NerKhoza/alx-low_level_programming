#include "main.h"

/**
 * cap_string -  function that capitalizes all words of a string
 * @str: parameter
 * Return: string
 */

char *cap_string(char *str)
{
	int x, y;
	char z[] = {44, 59, 46, '!', '?', '"', '(', ')', '{', '}', '\t', '\n'};

	for (x = 0 ; str[x] != '\0' ; x++)
	{
		if (x == 0 && str[x] >= 'a' && str[x] <= 'z')
		{
			str[x] = str[x] - 32;
		}
	for (y = 0 ; z[y] != '\0' ; y++)
	{
		if (z[y] == str[x] && (str[x + 1] >= 'a' && str[x + 1] <= 'z'))
		{
			str[x + 1] = str[x + 1] - 32;
		}
	}
	}
	return (str);
}
