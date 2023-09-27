#include "main.h"

/**
 * _pow_recursion - function that returns a power
 * @x: parameter 1
 * @y: parameter 2
 * Return: 1 and -1
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
		return (-1);
}
