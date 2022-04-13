#include "main.h"

/**
 * _abs - Gives absolute of an input
 *@c: number to be checked
 *
 * Return: Return depends on c
 */
int _abs(int c)
{
	if (c < 0)
	{
		return (c * -1);
	}
	else if (c > 0)
	{
		return (c);
	}

	return (0);
}
