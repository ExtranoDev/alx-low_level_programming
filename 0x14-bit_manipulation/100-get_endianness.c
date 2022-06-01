#include "main.h"

/**
 * get_endianness - detect the endianess of a machine
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *s = (char *) &i;
	
	return ((int) *s);
}
