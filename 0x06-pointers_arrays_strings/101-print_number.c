#include "main.h"

/**
 * print_number - prints integer using putchar
 * @n: number
 */
void print_number(int n)
{
	int i = 1, n = 0, j = n;

	if (n < 0)
	{
		_putchar('-');
		n = 1;
	}
	while (j > 0 || j < -9)
	{
		i *= 10;
		j /= 10;
	}
	while (i > 0)
	{
		if (i > 9)
		{
			if (!n)
				_putchar((n / i % 10) + '0');
			else
				_putchar((n / i % 10 ) * -1 + '0');
			i /= 10;
		}
		if (i == 1)
		{
			if (n)
				_putchar((n % 10) * -1 + '0');
			else
				_putchar(n % 10 + '0');
			i = 0;
		}
	}
}
