#include "function_pointers.h"

/**
 * print_name - prints inputed name
 * @name: name string
 * @f: function
<<<<<<< HEAD
 * Return: nothing
=======
>>>>>>> d1c6a33219d06d1357e7b5912ae82d86ea180ad8
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
