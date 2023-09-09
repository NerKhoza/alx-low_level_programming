#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int x;
	char a;

	for (x = 0 ; x <= 10 ; x++)
		putchar(x + '0');
	for (a = 'a' ; a <= 'f' ; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
