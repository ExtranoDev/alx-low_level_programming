#include <stdio.h>

/** main -  Entry point
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
	unsigned long int i = 1, j = 2;
	int x;

	for (x = 0; x < 50; x++)
	{
		printf("%lu, %lu, ", i, j);
		i = i + j;
		j = j + i;
	}

	return (0);
}
