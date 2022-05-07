#include "main.h"

/**
 * set_string - Changes value of string using pointers
 * @s: string
 * @to: string
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
