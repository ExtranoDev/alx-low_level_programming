#include "main.h"

/**
 * rot13 - encryption for ceaser
 * @s: string
 *
 * Return: s
 */
char *rot13(char *s)
{
	int x, y;
	char raw[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rt13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; raw[y] != '\0'; y++)
		{
			if (s[x] == raw[y])
			{
				s[x] = rt13[y];
				break;
			}
		}
	}

	return (s);
}
