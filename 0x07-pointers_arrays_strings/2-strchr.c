#include "main.h"

/**
 * _strchr - locates char in a string
 * @s: string
 * @c: char
 *
 * Return: a string
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (i >= 0)
	{
		if (s[i] == c)
			return (s[i]);
		else if (s[i] == '\0')
			return (NULL);
		i++;
	}

	return (' ');
}
