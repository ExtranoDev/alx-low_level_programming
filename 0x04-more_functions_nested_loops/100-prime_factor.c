#include <stdio.h>
#include <math.h>

/**
 * main - Prints highest prime number
 *
 * Return: prime number
 */
int main(void)
{
	unsigned long num = 612852475143, i = 3, recPrime = 0;

	for ( ; i <= num; i += 2)
	{
		while (num % i == 0)
		{
			recPrime = num;
			num /= i;
		}
	}

	printf("%lu\n", recPrime);

	return (0);
}
