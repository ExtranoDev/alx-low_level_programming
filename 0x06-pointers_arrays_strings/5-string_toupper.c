#include "main.h"

/**
 * string_toupper - change str to upper
 * @s: string
 */
char string_toupper(char *s)
{
	int x;
	
	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] > 96 && s[x] < 123)
		{
			s[x] -= 32;
		}
	}
	return (s);
}
