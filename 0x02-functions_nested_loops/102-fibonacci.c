#include <stdio.h>

/** main -  Entry point
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
	unsigned int i = 1, j = 2;
	int x;

	for (x = 0; x < 50; x++)
	{
		printf("%u, %u", i, j);

		if (x != 49)
			printf(", ");
		else
			putchar('\n');

		i = i + j;
		j = j + i;
	}

	return (0);
}
