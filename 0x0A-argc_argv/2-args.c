#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: parameter 1
 * @argv: parameter 2
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
