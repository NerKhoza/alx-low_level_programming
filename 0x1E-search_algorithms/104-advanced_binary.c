#include "search_algos.h"

int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return (-1);

    printf("Searching in array: ");
    for (size_t i = 0; i < size; i++)
    {
        printf("%d", array[i]);
        if (i < size - 1)
            printf(", ");
    }
    printf("\n");

    size_t mid = (size - 1) / 2;

    if (array[mid] == value)
        return (mid);

    if (array[mid] > value)
        return (advanced_binary(array, mid, value));

    int result = advanced_binary(array + mid + 1, size - mid - 1, value);
    return (result == -1 ? -1 : mid + 1 + result);
}

