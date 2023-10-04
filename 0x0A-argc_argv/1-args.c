#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints the number of arguments
 * @argc: parameter 1
 * @argv: parameter 2
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
