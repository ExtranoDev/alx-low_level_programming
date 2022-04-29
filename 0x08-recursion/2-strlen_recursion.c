#include "main.h"

/**
 * _strlen_recursion - prints length of string
 * @s: string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s == '\0')
		return n + 1;
	else
		s += 1;
	_strlen_recursion(n += 1);
}
