#include "main.h"

/**
 * clear_bit - Filps bit to 0 at particlar index
 * @n: number
 * @index: index of bit representation
 *
 * Return: 1 or -1 incase of error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * BYTE_CONST))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
