#include "main.h"
#include <stdlib.h>

/**
 * strdup - duplicates string
 * @str: string
 *
 * Return: string
 */
char *_strdup(char *str)
{
	unsigned int n;
	char *i;

	i = malloc(sizeof(str));

	if (str == NULL || i == NULL)
		return ('\0');

	for (n = 0; n < sizeof(str); n++)
		i[n] = str[n];

	return (i);
}
