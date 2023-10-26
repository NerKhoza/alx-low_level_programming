#include "main.h"
#include <stdio.h>
#include <stdint.h>

/**
 * get_endianness - function that checks the endianness
 * Return: 1 and 0
 */

int get_endianness(void)
{
	uint32_t num;
	uint8_t *byteArray;

	num = 1;

	byteArray = (uint8_t *)&num;

	if (byteArray[0] == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
