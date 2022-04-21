#include "main.h"

/**
 * rev_string - reverse string using pointers
 * @s: string
 */
void rev_string(char *s)
{
	int i, j = 0;
	char *x;

	for (i = 0; s[i] != '\0'; ++i)
	{
		*(x + i) = *(s + i);
	}

	while (i >= 0)
	{
		*(s - i) = *(x + j);
		i--;
		j++;
	}

	_putchar('\n');
}
