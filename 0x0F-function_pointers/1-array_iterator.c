#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function function iterator
 * @array: array
 * @size: size of the array
 * @action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action && array)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
