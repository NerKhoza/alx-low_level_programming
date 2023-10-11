#include "3-cal.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: parameter 1
 * @argv: parameter 2
 * Return: 0
 */

int main(int argc; char *argv[])
{
	char *op;
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = (argv[2]);
	num2 = atoi(arg[3]);

	if (get_op_func(op) == NULL || OP[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
