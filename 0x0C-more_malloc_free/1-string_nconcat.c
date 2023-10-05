#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: parameter
 * Return: NULL and result
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s_len1;
	unsigned int s_len2;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	s_len1 = strlen(s1);
	s_len2 = strlen(s2);

	if (n >= s_len2)
	{
		n = s_len2;
	}

	result = (char *)malloc(s_len1 + n + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	strcpy(result, s1);

	strncat(result, s2, n);

	return (result);
}
