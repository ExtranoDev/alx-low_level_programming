#include "main.h"

/**
 * print_binary - converts and print number as binary
 * @n: number to be printed
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned int tmpHold, j, mul;
	int i;
	char bin[1000];

	i = j = mul = 0;
	tmpHold = n;

	if (!n)
		_putchar('0');
	else if (n == 1)
	{
		_putchar('1');
		return;
	}

	while (1)
	{
		if (1 << i <= (int)(n))
			mul = 1 << i;
		else
			break;
		i++;
	}
	--i;
	while (i >= 0)
	{
		if (tmpHold >= mul)
		{
			tmpHold -= mul;
			bin[j] = '1';
		}
		else
			bin[j] = '0';
		j++;
		i = i - 1;
		mul = 1 << i;
	}

	bin[j] = '\0';
	for (j = 0; bin[j] != '\0'; j++)
		_putchar(bin[j]);
}
