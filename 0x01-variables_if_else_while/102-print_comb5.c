#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
	int x = 0;
	int y = 0;
	int z = 1;
	int w = 0;

	while (w <= 9)
	{
		while (x < 9)
		{
			while (y <= 9)
			{
				while (z <= 9)
				{
					putchar(w % 10 + '0');
					putchar(x % 10 + '0');
					putchar(' ');
					putchar(y % 10 + '0');
					putchar(z % 10 + '0');

					if (w == 9 && x == 8 && y == 9 && y == 9)
						break;

					putchar(',');
					putchar(' ');

					z = z + 1;
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
	}
	
	putchar('\n');
	
	return (0);
}
