#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * argstostr - function that concatenates all the arguments
 * @ac: parameter 1
 * @av: parameter 2
 * Return: NULL and result
 */

char *argstostr(int ac, char **av)
{
	int i;
	size_t current_position = 0;
	size_t total_length = 0;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < ac ; i++)
	{
		total_length += strlen(av[i]) + 1;
	}

	result = (char *)malloc(total_length + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < ac ; i++)
	{
		strcpy(result + current_position, av[i]);
		current_position += strlen(av[i]);
		result[current_position] = '\0';
		current_position++;
	}
	result[current_position] = '\0';

	return (result);
}
