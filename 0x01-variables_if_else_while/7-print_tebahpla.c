#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	char al;

	for (al = 'z' ; al >= 'a' ; al--)
		putchar(al);
	putchar('\n');
	return (0);
}
