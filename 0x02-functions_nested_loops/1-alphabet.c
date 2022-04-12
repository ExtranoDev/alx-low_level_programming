#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase
 */
void print_alphabet(void)
{
	char me = 'a';

	while (me <= 'z')
	{
		_putchar(me);
		me++;
	}

	_putchar('\n');
}
