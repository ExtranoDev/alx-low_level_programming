#include "main.h"

/**
 * *cap_string - change str to upper
 * @s: string
 *
 * Return: s
 */
char *cap_string(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == 32)
		{
			s[x + 1] -= 32;
		}
	}
	return (s);
}
