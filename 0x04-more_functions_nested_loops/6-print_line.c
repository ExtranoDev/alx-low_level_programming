#include "main.h"

/**
 * print_line - Prints line n times
 * @n: number of lines
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}

	_putchar('\n');
}
