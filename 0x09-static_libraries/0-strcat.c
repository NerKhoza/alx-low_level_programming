#include "main.h"
#include <string.h>

/**
 * _strcat - function that concatenates two strings
 * @dest: charecter
 * @src: charecter
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int srclen = 0;
	int destlen = 0;
	int x;

	for (x = 0 ; src[x] != '\0' ; x++)
		srclen++;
	for (x = 0 ; dest[x] != '\0' ; x++)
		destlen++;

	for (x = 0 ; x <= srclen ; x++)
		dest[destlen + x] = src[x];
	return (dest);
}
