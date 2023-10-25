#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - function that calculates
 * @n: function parameter 1
 * Return: sqaure root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - function that returns the natural square root
 * @n: parameter 1
 * @i: parameter 2
 * Return: -1 and i
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	{
		return (-1);
	}

	if (sqrt == n)
	{
		return (i);
	}

	return (_sqrt(n, i + 1));
}
