#include "main.h"

/**
 * _pow_recursion - finds the power of a num to another num
 * @x: base number
 * @y: power
 * Return: x^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y > 1)
		y -= 1;
	else if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
