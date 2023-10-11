#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - a function that prints opcodes
 * @num_bytes: number of bytes
 */

void print_opcodes(int num_bytes)
{
	unsigned char *ptr;
	int x;

	ptr = (unsigned char *)print_opcodes;

	for (x = 0 ; x < num_bytes ; x++)
	{
		printf("%02x ", ptr[x]);
	}

	printf("\n");
}

/**
 * main - funtion containing an opcode
 * @argc: parameter 1
 * @argv: parameter 2
 * Return: 0, 1 and 2
 */

int main(int argc, char *argv[])
{
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(num_bytes);

	return (0);
}
