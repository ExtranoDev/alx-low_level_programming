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
	char *i;

	if (size == 0)
		return ('\0');
	else
		i = malloc(size * sizeof(c));
	return (i);
}
