#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * is_palindrome - function that returns a palindrome
 * @s: function parameter
 * Return: 0 and 1
 */

int is_palindrome(char *s)
{
	int i;
	int j;
	int length = strlen(s);

	if (length <= 1)
	{
		return (1);
	}

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		if (s[i] != s[j])
		{
			return (0);
		}
	}
	return (1);
}
