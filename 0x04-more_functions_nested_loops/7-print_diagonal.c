#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Prints diagonal line
 * @n: how long line should be
 */
void print_diagonal(int n)
{
	int i = n, j = 0;

	while (i > 0)
	{
		while (j > 0)
		{
			putchar(' ');
			j--;
		}

		putchar('\\');
		putchar('\n');
		i--;
		j = n - i;
	}

	if (n <= 0)
		putchar('\n');
}
