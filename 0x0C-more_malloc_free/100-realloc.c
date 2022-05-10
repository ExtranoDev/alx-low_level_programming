#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocate using malloc and free
 * @ptr: pointer array
 * @old_size: previous size
 * @new_size: new size
 * Return: integer array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *narr;
	char *ncptr, *ncarr;
	unsigned int i;

	if (new_size == 0)
	{
		if (ptr != NULL)
			free(ptr);
		return (NULL);
	}
	else if (ptr == NULL)
		return (malloc(new_size));
	else if (new_size <= old_size)
		return (ptr);
	else
	{
		narr = malloc(new_size);
		if (narr != NULL)
		{
			ncarr = (char *)narr;
			ncptr = (char *)ptr;
			for (i = 0; i < old_size; i++)
				ncarr[i] = ncptr[i];
			free(ptr);
		}
		return (narr);
	}

	return (0);
}
