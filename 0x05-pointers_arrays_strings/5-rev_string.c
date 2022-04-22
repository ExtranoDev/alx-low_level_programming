#include "main.h"

/**
 * rev_string - reverse string using pointers
 * @s: string
 */
void rev_string(char *s)
{
	int i, j = 0;
	char *x = s;

	for (i = 0; s[i] != '\0'; ++i)
	{
	}

	i--;

	for ( ; i >= 0; i--)
	{
		*(s + j) = *(x + i);
		j++;
	}
}
