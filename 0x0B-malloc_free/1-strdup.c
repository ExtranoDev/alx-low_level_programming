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
	unsigned int n = 0;
	char *i;

	i = malloc(sizeof(str));
	if (str == NULL || i == NULL)
		return ('\0');
	while (str[n] != '\0')
	{
		i[n] = str[n];
		n++;
	}
	i[n] = '\0';
	return (i);
}
