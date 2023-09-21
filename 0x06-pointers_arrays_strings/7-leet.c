#include "main.h"

/**
 * leet - function that encodes a string
 * @str: parameter
 * Return: string
 */

char *leet(char *str)
{
	int x, y;
	char a[] = "aAeEoOtTiL";
	char b[] = "4433007711";

	for (x = 0 ; str[x] != '\0' ; x++)
	{
		for (y = 0 ; a[y] != '\0' ; y++)
		{
			if (str[x] == a[y])
			{
				str[x] = b[y];
			}
		}
	}
	return (str);
}
