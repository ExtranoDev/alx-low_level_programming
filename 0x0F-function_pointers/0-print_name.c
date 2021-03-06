#include "function_pointers.h"

/**
 * print_name - prints inputed name
 * @name: name string
 * @f: function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
