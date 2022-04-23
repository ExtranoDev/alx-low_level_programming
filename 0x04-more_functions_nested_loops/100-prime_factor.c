#include <stdio.h>
#include <math.h>

/**
 * main - Prints highest prime number
 *
 * Return: prime number
 */
int main(void)
{
	unsigned long num = 612852475143, i = 3;
	int recPrime = 0;

	while (i < sqrt(num))
	{
		while (num % i == 0)
		{
			recPrime = i;
			num /= i;
		}

		i += 2;
	}

	printf("%d\n", recPrime);

	return (0);
}
