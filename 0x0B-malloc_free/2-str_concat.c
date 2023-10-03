#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: parameter 1
 * @s2: parameter 2
 * Return: NULL and out
 */

char *str_concat(char *s1, char *s2)
{
	int s1d = 0;
	int s2d = 0;
	int i;
	char *out;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0 ; s1[i] != '\0' ; i++)
	{
		s1d++;
	}
	for (i = 0 ; s2[i] != '\0' ; i++)
	{
		s2d++;
	}

	out = malloc(sizeof(char) * (s1d + s2d) + 1);

	if (out == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; s1[i] != '\0'; i++)
	{
		out[i] = s1[i];
	}
	for (i = 0 ; s2[i] != '\0'; i++)
	{
		out[s1d + i] = s2[i];
	}
	return (out);
}
