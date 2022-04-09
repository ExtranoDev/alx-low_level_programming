#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		putchar(a % 10 + '0');

		if (a != 9)
		{
			putchar(',');
			putchar(' ');
		}
		
		a = a + 1;
	}

	putchar('\n');

	return (0);
}
