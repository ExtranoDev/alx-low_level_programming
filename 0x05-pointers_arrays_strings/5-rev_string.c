#include "main.h"

/**
 * rev_string - reverse string using pointers
 * @s: string
 */
void rev_string(char *s)
{
	int i;
	char *x;

	x = s;

	for (i = 0; s[i] != '\0'; ++i)
		_putchar(s[i]);

	i--;

	for ( ; i >= 0; i--)
		s[i] = *x++;

	_putchar('\n');
}
