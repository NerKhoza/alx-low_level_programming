#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a key
 * @key: parameter 1
 * @size: parameter 2
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;
	unsigned long int index;

	hash_value = hash_djb2(key);
	index = hash_value % size;

	return (index);
}
