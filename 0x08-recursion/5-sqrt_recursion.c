#include "main.h"

/**
 * _sqrt_recursion - finds sqrt of num
 * @n: number
 * Return: sqrt(n)
 */
int _sqrt_recursion(int n)
{
	return sqrt_answer(n, 1);
}

/**
 * square_process - finds the sqrt
 * @i: integer
 * @g: guess number
 */
int square_process(int i, int g)
{
	if (g * g == i)
		return (g);
	else
		return (square_process(i, g += 1));
}
