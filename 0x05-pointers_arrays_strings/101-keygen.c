#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - random password generator for 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
	char x[100];

	y = 0;
	z = 0;
	srand(time(NULL));
	while (y < 2645)
	{
		z = rand() % 122;
		if (z > 32)
		{
			x[z++] = z;
			y += z;
		}
	}
	x[z++] = 2772 - y;
	x[z] = '\0';
	printf("%s", x);

	return (0);
}
