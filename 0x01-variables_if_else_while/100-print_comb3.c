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

	while (x < 9)
	{
		while (y <= 9)
		{
			putchar(x % 10 + '0');
			putchar(y % 10 + '0');

			if (x == 8 && y == 9)
				break;

			putchar(',');
			putchar(' ');
			y = y + 1;
		}

		x = x + 1;
		y = x + 1;
	}

	putchar('\n');

	return (0);
}
