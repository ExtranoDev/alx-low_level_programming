#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - return two dimensional array of int
 * @width: width of array
 * @height: height of array
 *
 * Return: array
 */
int **alloc_grid(int width, int height)
{
	int **i, j, x;

	if (width <=0 || height <= 0)
		return (0);

	i = (int **)malloc(height * sizeof(int));

	i = malloc(width * sizeof(int));
	for (j = 0; j < height; j++)
		i[j] = (int *)malloc(width * sizeof(int));

	for (j = 0; j < height; j++)
	{
		for (x = 0; x < width; x++)
			i[j][x] = 0;
	}

	return (i);
}
