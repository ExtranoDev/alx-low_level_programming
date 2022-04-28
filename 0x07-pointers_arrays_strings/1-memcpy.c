#include "main.h"

/**
 * _memcpy - copys memory area
 * @dest: destination
 * @src: source
 * @n: number
 *
 * Return: a string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
