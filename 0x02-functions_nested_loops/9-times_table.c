#include "main.h"

/**
 * times_table - Prints a time table
 */
void times_table(void)
{
	int x, y = 0, z, temp;

	for (x = 0; x <= 9; x++)
	{
		for (z = 0; z <= 9; z++)
		{
			temp = y / 10;

			if (temp != 0)
				_putchar(temp + '0');

			_putchar(y % 10 + '0');

			if (z == 9)
				break;

			_putchar(',');

			if (y < 10)
				_putchar(' ');

			_putchar(' ');
			y = y + x;
		}

		_putchar('\n');
		y = 0;
	}
}
