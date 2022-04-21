#include "main.h"

/**
 * rev_string - reverse string using pointers
 * @s: string
 */
void rev_string(char *s)
{
	int i;
	char x[10];

	for (i = 0; s[i] != '\0'; ++i)
		_putchar(s[i]);

	i--;

	for ( ; i >= 0; i--)
		x[9 - i] = s[i];

	*s = x[10];
	_putchar('\n');
}
