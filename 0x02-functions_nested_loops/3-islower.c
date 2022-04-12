#include "main.h"

/**
 * _islower - checks if a letter is lower case
 *@c: letter to be checked
 *
 * Return: Return depends on c
 */
int _islower(int c)
{
	if (c < 97)
	{
		return (0);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
