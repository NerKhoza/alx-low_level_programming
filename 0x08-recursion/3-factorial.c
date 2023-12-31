#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: parameter
 * Return: -1 and 1
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else if (n > 1)
	{
		return (n * factorial(n - 1));
	}
	else
		return (-1);
}
