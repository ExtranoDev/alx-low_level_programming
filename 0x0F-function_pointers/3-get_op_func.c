#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - get the type of operation to be usedd
 * @s: operator
 * Return: pointer to operation
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	for (i = 0; !ops[i].op && (*(ops[i].op) != *s); i++)
		i++;
	return (ops[i].f);
}
