#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: parameter 1
 * @argv: parameter 2
 * Return: 0 and 1
 */

int main(int argc, char *argv[])
{
	int num;
	int i;
	int j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0 ; i < argc ; i++)
	{
		for (j = 0 ; argv[j] != NULL ; j++)
		{
			if (!isdigit(argv[i]))
			{
				printf("Error\n");
				return (0);
			}
		}
	}

	num = atoi(argv);
	if (num < 0)
	{
		printf("Error\n");
		return (1);
	}
	sum += num;
	printf("%d\n", sum);
	return (0);
}
