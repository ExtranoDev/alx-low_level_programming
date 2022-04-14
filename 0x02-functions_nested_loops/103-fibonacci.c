#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
	unsigned long int i = 1, j = 2, tempSum = 0;

	while (1)
	{
		if (i <= 4000000 && i % 2 == 0)
			tempSum += i;

		if (j <= 4000000 && j % 2 == 0)
			tempSum += j;

		if (j >= 4000000)
			break;

		i += j;
		j += i;
	}

	printf("%lu\n", tempSum);

	return (0);
}
