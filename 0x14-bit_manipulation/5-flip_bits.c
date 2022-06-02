#include "main.h"

/**
 * flip_bits - How long it takes flip n to get m
 * @n: first number
 * @m: second number
 *
 * Return: number of times it takes to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int sShift = (sizeof(n) * BYTE_CONST), nShift = 0;

	while(sShift--)
		nShift += (n >> sShift & 1) != (m >> sShift & 1);

	return (nShift);
}
