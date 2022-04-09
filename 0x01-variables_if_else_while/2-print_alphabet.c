#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
	char x = 'a';

	while (x <= 26)
	{
		putchar("%c",x);
		x = x + 1;
	}

	putchar("\n");

	return (0);
}
