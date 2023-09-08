#include <stdio.h>

/**
 * main - main function
 *
 * return:0 always
 */

int main(void)/* This is the main function, and it returns an integer value.*/
{
	char al;

	for (al = 'a' ; al <= 'z' ; al++)
		putchar(al);
	putchar('\n');
	return (0);
}
