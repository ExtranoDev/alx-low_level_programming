#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x == 'q' || x == 'e')
			continue;

		putchar(x);
		x = x + 1;
	}

	putchar('\n');

	return (0);
}
