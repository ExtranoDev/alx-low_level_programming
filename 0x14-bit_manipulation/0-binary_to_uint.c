#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: string of 0's and 1's
 *
 * Return: number or 0 or NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int i, j;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; ++i)
		;

	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] == '1')
			dec += 1 << (i - 1);
		else if (b[j] != '0')
			return (0);
		--i;
	}
	return (dec);
}
