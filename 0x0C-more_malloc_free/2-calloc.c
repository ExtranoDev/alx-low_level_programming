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
	char *ptr;
	int count = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(count);

	if (arr == NULL)
		return (NULL);

	ptr = arr;

	while (count--)
		*ptr++ = 0;

	return (arr);
}
