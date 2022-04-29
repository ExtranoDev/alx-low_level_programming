#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\n')
	{
		_putchar('\n');
		return;
	}

	_puts_recursion(s += 1);
	_putchar(*s);
}
