#include "main.h"
#include <stdio.h>

/**
 * main - function that prints it name
 * @argc: parameter 1
 * @argv: parameter 2
 * Return: 0
 */

int main(int argc, char *argv[])
{

	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
