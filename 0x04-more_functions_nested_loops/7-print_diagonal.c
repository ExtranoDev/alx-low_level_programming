#include "main.h"

/**
 * print_diagonal - Prints diagonal line
 * @n: how long line should be
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
		_putchar('\n');
		n--;
		j++;
		i = j;
	}

	if (n <= 0)
		_putchar('\n');
}
