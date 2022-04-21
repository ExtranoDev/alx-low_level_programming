#include "main.h"

/**
 * swap_int - swap values
 * @a: frist val
 * @b: Second val
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
