#include "main.h"

/**
 * leet - change str to upper
 * @s: string
 *
 * Return: s
 */
char *leet(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == 97 || s[x] == 65)
			s[x] = 4 + '0';
		else if (s[x] == 101 || s[x] == 69)
			s[x] = 3 + '0';
		else if (s[x] == 79 || s[x] == 111)
			s[x] = 0 + '0';
		else if (s[x] == 84 || s[x] == 116)
			s[x] = 7 + '0';
		else if (s[x] == 76 || s[x] == 108)
			s[x] = 1 + '0';
		else
			continue;
	}
	return (s);
}
