#include "main.h"

/**
 * puts2 - prints certain string in strings
 * @str: string
 */
void puts2(char *str)
{
	int i, j = 0;

	for (i = 0; str[i] != '\0'; ++i)
	{
	}

	i--;

	while (j <= i)
	{
		_putchar(str[i]);
		j = j + 2;
	}

	_putchar('\n');
}
