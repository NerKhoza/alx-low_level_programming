#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: function parameter
 * Return: 0 and 1
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s == ' ' || *s == '\t')
		s++;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}
	return (result * sign);
}
