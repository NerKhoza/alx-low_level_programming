#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int x;

	for (x = 0 ; x < 10 ; x++)
	{
		if (x == 9)
			putchar(x + '0');
		else
			putchar(x);
			putchar(',');
			putchar(' ');
	}
	return (0);
}
