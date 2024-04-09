#include "search_algos.h"

/**
 * exponential_search - Search for a value in a sorted array using exponential search algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the first occurrence of value in array, or -1 if not found
 */

int exponential_search(int *array, size_t size, int value)
{
	int bound;
	int left;
	int right;
	int i;
	int mid;	

	if (array == NULL || size == 0)
		return (-1);

	bound = 1;
	
	while (bound < (int)size && array[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	
	left = bound / 2;
	right = bound < (int)size ? bound : (int)size - 1;
	printf("Value found between indexes [%d] and [%d]\n", left, right);

	while (left <= right)
	{
		printf("Searching in array:");
		for (i = left; i <= right; i++)
		{
			printf(" %d", array[i]);
				if (i < right)
					printf(",");
		}
		printf("\n");
	
		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	 return (-1);
}
