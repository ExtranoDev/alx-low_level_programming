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

	while (haystack[i])
	{
		while (needle[j])
		{
			if (haystack[i + j] != needle[i])
				break;
			j++;
		}
		if (needle[i] == '\0')
			return (haystack + i);
		i++;
	}

	return ('\0');
}
