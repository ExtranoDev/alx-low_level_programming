#include "main.h"

/**
 * reverse_array - concatenates two strings
 * @a: array
 * @n: int
 */
void reverse_array(int *a, int n)
{
	int x[999], i, j;

	for (i = 0; i < n; i++)
		x[i] = a[i];

	while (j < n)
	{
		i--;
		a[j] = x[i];
		j++;
	}
}
