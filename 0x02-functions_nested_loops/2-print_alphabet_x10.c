#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in lowercase
 */
void print_alphabet_x10(void)
{
	char me = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		while (me <= 'z')
		{
			_putchar(me);
			me++;
		}
		
		me = 'a';
	}

	_putchar('\n');
}
