#include "main.h"

/**
 * _memset - fills strings with symbols
 * @s: string
 * @b: symbol
 * @n: number of times
 *
 * Return: a string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
