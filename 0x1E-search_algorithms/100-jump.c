#include "search_algos.h"

int jump_search(int *array, size_t size, int value)
{
	int jump;
	int prev;
	size_t current;
	size_t i;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	jump = sqrt(size);
	prev = 0;
	current = jump;

	while (current < size && array[current] < value)
	{
		printf("Value checked array[%d] = [%d]\n", current, array[current]);
		prev = current;
		current += jump;		
	}
	
	printf("Value found between indexes [%d] and [%d]\n", prev, current);
	
	for (i = prev; i <= current && i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
