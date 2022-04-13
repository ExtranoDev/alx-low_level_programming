#include "main.h"

int comp(int n);

/**
 * print_times_table - Prints a time table of n inputed numbers
 * @n: number of times table to be printes
 */
void print_times_table(int n)
{
	int x, y = 0, z, temp1, temp2;

	for (x = 0; x <= n; x++)
	{
		if (comp(n) == 1 || comp(n) == 2)
			break;

		for (z = 0; z <= n; z++)
		{
			temp1 = y / 100;
			temp2 = y / 10;

			if (temp1 != 0)
			{
				_putchar(temp1 + '0');
				temp2 = (y / 10) % 10;
				_putchar(temp2 + '0');
			}
			else if (temp2 != 0)
				_putchar(temp2 + '0');

			_putchar(y % 10 + '0');

			if (z == n)
				break;

			_putchar(',');
			y = y + x;

			if (y < 100)
				_putchar(' ');
			if (y < 10)
				_putchar(' ');

			_putchar(' ');
		}

		_putchar('\n');
		y = 0;
	}
}

int comp(int n)
{
	if (n >= 15)
	{
		return (1);
	}
	else if (n <= 0)
	{
		_putchar('0');
		return (2);
	}

	return (0);
}
