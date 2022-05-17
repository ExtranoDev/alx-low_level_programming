#include "variadic_functions.h"

/**
 * sum_them_all - summ all parameters
 * @n: number of parameters
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list al;
	int i, sum = 0;

	va_start (al, n);

	for (i = 0; i < n; i++)
		sum += va_arg (al, int);

	va_end(al);
	return (sum);
}