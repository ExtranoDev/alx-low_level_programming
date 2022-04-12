#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
	char putsOut[8] = "_putchar";
	int count = 0;

	while (count < 8)
	{
		putchar(putsOut[count]);
		count++;
	}

	putchar('\n');

	return (0);
}
