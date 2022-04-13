#include "main.h"

/**
 * times_table - Prints a time table
 */
void times_table(void)
{
	int x, y = 0, z;

	for (x = 0; x <= 9; x++)
	{
		for (z = 0; z <= 9; z++)
		{
			_putchar(y);

			if (z == 9)
				break;

			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			y = y + x;
		}

		_putchar('\n');
		y = 0;
	}
}
