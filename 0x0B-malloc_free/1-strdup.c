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

	for ( ; str[n] != '\0'; n++)
		;
	n++;
	if (str == NULL)
		return ('\0');
	i = malloc(n * sizeof(str));
	n--;
	while (n >= 0)
	{
		i[n] = str[n];
		n--;
	}
	return (i);
}
