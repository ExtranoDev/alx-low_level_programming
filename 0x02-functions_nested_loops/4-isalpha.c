#include "main.h"

/**
 * _isalpha - checks if a letter is lower case
 *@c: letter to be checked
 *
 * Return: Return depends on c
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
