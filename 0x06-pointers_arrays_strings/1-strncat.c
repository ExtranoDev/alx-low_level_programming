#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of string(s) to be copied
 *
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[j] != '\0')
		j++;

	while (i < n)
	{
		if (src[i] == '\0')
			break;

		dest[j] = src[i];
		i++;
		j++;
	}

	dest[j] = '\0';

	return (dest);
}
