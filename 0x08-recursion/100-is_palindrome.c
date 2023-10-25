#include "main.h"

/**
 * _strlen_recursion - Returns string length
 * @s: funtion parameter
 * Return: integer
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - it compares the character of a string
 * @n1: parameter 1
 * @n2: parameter 2
 * @s: parameter 3
 * Return: 0 and 1
 */

int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - function that checks for a palindrome
 * @s: function parameter
 * Return: integer
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
