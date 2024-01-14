#include "hash_tables.h"

/*
 * hash_table_get - a function that creates a hash table
 * @ht: parameter 1
 * @Key: parameter 2
 * Return: value and NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;
	hash_node_t *current;

	index = hash_djb2((const unsigned char *) key);

	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}
	return (NULL);
}
