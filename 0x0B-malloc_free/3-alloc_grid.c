#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer
 * @width: parameter 1
 * @height: parameter 2
 * Return: NULL and out
 */

int **alloc_grid(int width, int height)
{
	int **out;
	int x, y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	out = malloc(sizeof(int *) * height);

	if (out == NULL)
	{
		return (NULL);
	}


	for (x = 0; x < height ; x++)
	{
		out[x] = malloc(sizeof(int *) * width);
		if (out[x] == NULL)
		{
			free(out);
			for (y = 0 ; y <= height ; y++)
			{
				free(out[y]);
				return (NULL);
			}
		}
		for (y = 0 ; y < width ; y++)
		{
			out[x][y] = 0;
		}
	}
	return (out);
}
