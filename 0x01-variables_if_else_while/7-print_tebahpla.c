#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x = x - 1;
	}

	putchar('\n');

	return (0);
}
