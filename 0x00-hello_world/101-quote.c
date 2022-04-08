#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always return 0 (Successful)
 */
int main(void)
{
	char message[] = "and that piece of art is useful\"\ 
		- Dora Korpar, 2015-10-19\n";
	int i;

	for (i = 0; i < (int) sizeof(message); i++)
	{
		putchar(message[i]);
	}

	return (1);
}
