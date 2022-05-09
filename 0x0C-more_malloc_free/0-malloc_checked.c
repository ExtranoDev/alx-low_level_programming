#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - return allocated memory
 * @b: int
 */
void *malloc_checked(unsigned int b)
{
	void *i = malloc(b);

	if (i == NULL)
		exit(98);
	return (i);
}
