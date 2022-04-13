#include "main.h"

/**
 * print_last_digit - Prints last digit of a given number
 *@c: number to be checked
 *
 * Return: Return depends on c
 */
int print_last_digit(int c)
{
	if (c < 0)
	{
		c = (c * -1) % 10;
		_putchar(c + '0');
		return (c);
	}

	c = c % 10;
	_putchar(c + '0');
	return (c);
}
