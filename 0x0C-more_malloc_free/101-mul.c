#include <stdio.h>
#include <stdlib.h>

/**
 * isNumber - it checks if the input value is a character
 * @s: parameter 1
 * Return: 0 and 1
 */

int isNumber(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '0')
		{
			return (0);
		}
		s++;
	}
	return (1);
}

/**
 * multiply - a function that gives the product of two numbers
 * @num1: parameter 1
 * @num2: parameter 2
 * Return: num1 * num2
 */

int multiply(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * main - the main function that calls two functions
 * @argc: parameter 1
 * @argv[]: parameter 2
 * Return: 0 and 98
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!isNumber(argv[1] || !isNumber(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argc[2]);

	result = muitiply(num1, num2);
	printf("%d\n", result);

	return (0);
}
