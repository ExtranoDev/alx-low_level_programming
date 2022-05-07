#include "main.h"

/**
 * _strstr - check for first occurence of a string
 * @haystack: Big string
 * @needle: substring
 *
 * Return: text
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != neddle[b])
				break;
			b++;
		}
		if (needle[b] == '\0')
			return (haystack + a);
		a++;
	}

	return ('\0');
}
