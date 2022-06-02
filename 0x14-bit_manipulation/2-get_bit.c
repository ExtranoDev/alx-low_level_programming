#include "main.h"

/**
 * get_bit - gets bit with index
 * @n: num
 * @index: index of number
 * Return: bit or -1 incase of error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i, j = 0;
	char bitNum[999];

	i = n;

	while(j <= index)
	{
		bitNum[j] = (char)(i % 2);
		j++;
		i /= 2;
	}
	bitNum[j] = '\0';

	return (bitNum[index]);
}
