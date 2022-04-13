#include "main.h"

/**
 * jack_bauer - Prints Jack Bauer hours
 */
void jack_bauer(void)
{
	int w, x, y, z;

	for (w = 0; w < 3; w++)
	{
		for (x = 0; x < 4; x++)
		{
			for (y = 0; y < 6; y++)
			{
				for (z = 0; z < 10; z++)
				{
					_putchar(w + '0');
					_putchar(x + '0');
					_putchar(':');
					_putchar(y + '0');
					_putchar(z + '0');
					_putchar('\n');
				}
			}
		}
	}
}
