#include "main.h"

/**
 * print_diagonal - Prints diagonal line
 * @n - how long line should be
 */
void print_diagonal(int n)
{
	int i, j;

	i = j = 0;

	while (n > 0)
	{
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}

		_putchar('\\');
		n--;
		j++;
		i = j;
	}

	_putchar('\n');
}
