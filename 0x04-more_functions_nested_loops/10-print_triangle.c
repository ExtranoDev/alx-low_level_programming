#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints trianglar pattern
 * @size: dimension of pattern
 */
void print_triangle(int size)
{
	int i, j, x;

	for (i = size; i > 0; i--)
	{
		j = i - 1;
		x = size - j;

		for ( ; j > 0; j--)
			putchar(' ');

		while (x > 0)
		{
			putchar('#');
			x--;
		}

		putchar('\n');
	}

	if (size <= 0)
		putchar('\n');
}
