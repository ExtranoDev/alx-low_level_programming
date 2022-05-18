#include "variadic_functions.h"

/**
 * print_strings - print strings inly
 * @separator: seperates output
 * @n: number of integers
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vl;
	char *str;
	unsigned int i;

	va_start(vl, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(vl, char *);
		if (!str)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(vl);
}
