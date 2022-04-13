#include "main.h"

/**
 * _abs - Prints last digit of a given number
 *@c: number to be checked
 *
 * Return: Return depends on c
 */
int print_last_digit(int c)
{
	if (c < 0)
		return ((c * -1) % 10);

	return (c % 10);
}
