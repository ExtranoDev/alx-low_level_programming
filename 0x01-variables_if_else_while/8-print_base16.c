#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a % 10 + '0');
	}

	a = 'a';

	while (a <= 'f')
	{
		putchar('a');
		a = a + 1;
	}

	putchar('\n');

	return (0);
}
