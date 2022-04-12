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

	x = y = z = 0;

	for ( ; w <= 9; )
	{
		for ( ; x <= 9; )
		{
			for ( ; y <= 9; y++)
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

				z = 0;
			}

			x = x + 1;
			y = w;
			z = x + 1;
		}

		y = w = w + 1;
		z = x + 1;
	}

	putchar('\n');

	return (0);
}
