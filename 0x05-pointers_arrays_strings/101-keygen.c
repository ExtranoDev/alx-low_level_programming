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
	int i, j, y;

	j = 0;
	y = 0;
	srand(time(NULL));
	while (j < 2645)
	{
		i = rand() % 122;
		if (i > 32)
		{
			x[y++] = i;
			j += i;
		}
	}
	x[y++] = 2772 - j;
	x[y] = '\0';
	printf("%s", x);

	return (0);
}
