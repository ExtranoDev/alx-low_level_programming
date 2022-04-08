#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always return 0 (Successful)
 */
int main(void)
{
	char mem[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int i;

	for (i = 0; i < ((int) sizeof(mem)) - 1; i++)
	{
		putchar(mem[i]);
	}

	return (1);
}
