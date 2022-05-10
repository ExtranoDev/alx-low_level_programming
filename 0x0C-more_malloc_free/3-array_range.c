#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of int
 * @min: minimum int
 * @max: maximum int
 * Return: integer array
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (0);
	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (0);
	for (i = 0; min <= max; min++, i++)
		arr[i] = min;

	return (arr);
}
