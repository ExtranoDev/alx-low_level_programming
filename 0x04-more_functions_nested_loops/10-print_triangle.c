#include "main.h"

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
			_putchar(' ');

		while (x > 0)
		{
			_putchar('#');
			x--;
		}

		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
