#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function that returns a pointer
 * @str: parameter 1
 * Return: NULL and cp
 */

char *_strdup(char *str)
{
	int i;
	char *cp;
	int cnt;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		cnt++;
	}

	cp = malloc(sizeof(char) * cnt + 1);

	if (cp == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		cp[i] = str[i];
	}
	return (cp);
}
