#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
	double i = 1, j = 2;
	int x;

	for (x = 0; x < 49; x++)
	{
		printf("%.0f, %.0f", i, j);

		if (x != 48)
			printf(", ");
		else
		{
			putchar('\n');
			break;
		}

		i += j;
		j += i;
	}

	return (0);
}
