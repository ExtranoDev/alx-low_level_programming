#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
	int x, y, w;
	int z = 1;

	for (w = 0; w <= 9; )
	{
		for (x = 0; x <= 9; )
		{
			for (y = 0; y <= 9; )
			{
				for ( ; z <= 9; z++)
				{
					putchar(w % 10 + '0');
					putchar(x % 10 + '0');
					putchar(' ');
					putchar(y % 10 + '0');
					putchar(z % 10 + '0');

					if (w == 9 && x == 8 && y == 9)
						break;

					putchar(',');
					putchar(' ');
				}

				y = y + 1;
				z = 0;
			}

			x = x + 1;
			y = w;
			z = x + 1;
		}

		w = w + 1;
		x = 0;
		y = w + 1;
		z = x + 1;
	}
	
	putchar('\n');

	return (0);
}
