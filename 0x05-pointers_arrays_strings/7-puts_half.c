#include "main.h"

/**
 * puts_half - prints half of string
 * @str: string
 */
void puts_half(char *str)
{
	int i, j = 0;

	for (i = 0; str[i] != '\0'; ++i)
	{
	}

	i--;

	if (i % 2 == 0)
		j = i / 2;
	else 
		j = (i - 1) / 2;

	while (j <= i)
	{
		_putchar(str[j]);
		j++;
	}

	_putchar('\n');
}
