#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * @argc: parameter 1
 * @argv: parameter 2
 * Return: 0 and 1
 */

int main(int argc, char *argv[])
{
	int cents;
	int coins[5];
	int numcoins;
	int count;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins[0] = 25;
	coins[1] = 10;
	coins[2] = 5;
	coins[3] = 2;
	coins[4] = 1;

	numcoins = sizeof(coins) / sizeof(coins[0]);
	count = 0;

	for (i = 0 ; i < numcoins ; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
