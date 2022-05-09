#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array using malloc
 * @size: size of array
 * @c: array type
 *
 * Return: string
 */
char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *i;

	if (size == 0)
		return ('\0');
	i = malloc(size * sizeof(c));
	if (i != NULL)
	{
		for (n = 0; n < size; n++)
			i[n] = c;
	}
	return (i);
}
