#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - function that calculates the natural square root
 * @n: parameter 1
 * @low: parameter 2
 * @high: parameter 3
 * Return: -1, n, mid
 */

int _sqrt_recursion(int n, int low, int high)
{
	int mid = low + (high - low) / 2;
	int midSquare = mid * mid;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	if (midSquare == n)
	{
		return (mid);
	}
	else if (midSquare < n)
	{
		if (mid + 1 <= high)
		{
			return (_sqrt_recursion(n, mid + 1, high));
		}
		else
		{
			return (mid);
		}
	}
	else
	{
		if (mid - 1 >= low)
		{
			return (_sqrt_recursion(n, low, mid - 1));
		}
		else
		{
			return (-1);
		}
	}
}

/**
 * mySqrt - a function that finds squaroot
 * @n: function parameter
 * Return: sqrt
 */

int mySqrt(int n)
{
	return (_sqrt_recursion(n, 0, n));
}
