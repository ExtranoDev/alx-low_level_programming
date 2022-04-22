#include "main.h"

/**
 * rev_string - reverse string using pointers
 * @s: string
 */
void rev_string(char *s)
{
	int i, j = 0;
	char xx[999];
	char *x = xx;

	for (i = 0; s[i] != '\0'; ++i)
	{
		xx[i] = s[i];
	}

	i--;

	for ( ; i >= 0; i--)
	{
		*(s + j) = *(x + i);
		j++;
	}
}
