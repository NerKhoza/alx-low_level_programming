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
	int sum;
	int num;
	int i;
	int j;
	char *num1;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1 ; i < argc ; i++)
	{
		num1 = argv[i];
		for (j = 0 ; num1[j] != '\0' ; j++)
		{
			if (!isdigit(num1[j]))
			{
				printf("Error\n");
				return (0);
			}
		}
	}

	num = atoi(num1);
	if (num < 0)
	{
		printf("Error\n");
		return (1);
	}
	sum += num1;
	printf("%d\n", sum);
	return (0);
}
