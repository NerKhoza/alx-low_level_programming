#include "main.h"

/**
 * is_prime_number - function that checks for a prime number
 * @n: parameter 1
 * Return: 0 and 1
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
