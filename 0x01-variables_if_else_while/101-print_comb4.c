#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
	int x = 0;
	int y = 1;
	int z = 2;

	while (x < 8)
	{
		while (y < 9)
		{
			while (z <= 9)
			{
				putchar(x % 10 + '0');
				putchar(y % 10 + '0');
				putchar(z % 10 + '0');
				
				if (x == 7 && y == 8 && z == 9)
					break;

				putchar(',');
				putchar(' ');

				z = z + 1;
			}

			y = y + 1;
			z = y + 1;
		}

		x = x + 1;
		y = x + 1;
		z = y + 1;
	}

	putchar('\n');

	return (0);
}
