#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies string from one var to another
 * @dest: destination
 * @src: Source
 *
 * Return: Destination
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		if (src[i] == '\0')
			break;

		dest[i] = src[i];
		i++;
	}

	return (dest);
}
