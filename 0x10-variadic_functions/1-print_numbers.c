#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: seperates output
 * @n: number of integers
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vl;
	unsigned int i;

	va_start(vl, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(vl, int));
		if (i != (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(vl);
}
