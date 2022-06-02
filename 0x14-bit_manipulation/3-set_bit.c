#include "main.h"

/**
 * set_bit - Flips a bit value to true
 * @n: number
 * @index: index  of bit to be flipped
 *
 * Return: 1 or -1 in case of error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * BYTE_CONST))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
