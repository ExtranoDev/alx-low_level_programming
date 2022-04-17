#include "main.h"
#include <stdio.h>

/**
 * print_square - print a squared output
 * @size: dimension of square
 */
void print_square(int size)
{
	int i, j;

	for (i = size; i > 0; i--)
	{
		for (j = 0; j < size; j++)
			putchar('#');

		putchar('\n');
	}

	if (size <= 0)
		putchar('\n');
}
