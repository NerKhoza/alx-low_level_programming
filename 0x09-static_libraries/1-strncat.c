#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bites to concatenate
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int x;

	for (x = 0 ; x < n && *src != '\0' ; x++)
	{
		dest[len + x] = *src;
		src++;
	}
	dest[len + x] = '\0';
	return (dest);
}
