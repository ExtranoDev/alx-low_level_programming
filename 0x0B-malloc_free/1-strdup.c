#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - duplicates string
 * @str: string
 *
 * Return: string
 */
char *_strdup(char *str)
{
	int n = 0;
	char *i;

	if (str == NULL)
		return ('\0');
	for ( ; str[n] != '\0'; n++)
		;
	i = malloc(n * sizeof(str));
	if (i == NULL)
		return ('\0');
	n--;
	while (n >= 0)
	{
		i[n] = str[n];
		n--;
	}
	return (i);
}
