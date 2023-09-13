#include "main.h"

/**
 * _islower - checks for lower case
 * @c: parameter to be checked
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
