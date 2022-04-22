#include <stdio.h>

/**
 * main - Prints highest prime number
 *
 * Return: prime number
 */
int main(void)
{
	int num = 612852475143, recPrime = 0;
	int i = 2;

	while (i < (num / 2))
	{
		if ((i % 2 == 0) || (i % 3 == 0) || (i % 5 == 0))
		{
			i++;
			continue;
		}
		else if (num % i == 0)
			recPrime = i;
		i++;
	}

	printf("%d\n", recPrime);
}
