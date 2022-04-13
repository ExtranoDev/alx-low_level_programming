#include "main.h"

/**
 * print_sign - checks if sign of an input
 *@c: letter to be checked
 *
 * Return: Return depends on c
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}

	return (0);
}
