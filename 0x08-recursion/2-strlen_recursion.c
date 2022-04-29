#include "main.h"

/**
 * _strlen_recursion - prints length of string
 * @s: string
 * Return: length of string
 */
int n;

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return n;
	else
		n += 1;
	_strlen_recursion(s += 1);
	return n;
}
