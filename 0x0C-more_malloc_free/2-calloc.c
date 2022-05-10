#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: array
 * @size: size
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
		return ('\0');
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return ('\0');
	return (arr);
}
