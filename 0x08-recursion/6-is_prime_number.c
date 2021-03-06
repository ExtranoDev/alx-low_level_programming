#include "main.h"

/**
 * is_prime_number - finds sqrt of num
 * @n: number
 * Return: prime status
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime_process(n, 2));
}

/**
 * prime_process - check for prime
 * @i: integer
 * @g: divisor
 * Return: sqrt
 */
int prime_process(int i, int g)
{
	if (i % g == 0)
		return (0);
	else if ((g > 5) && (i % g != 0) && (g * g > i))
		return (1);
	return (prime_process(i, g + 1));
}
