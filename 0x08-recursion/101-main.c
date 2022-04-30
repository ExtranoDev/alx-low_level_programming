#include "main.h"
#include <stdio.h>

/**
 * main - check code
 *
 * Return: Always 0
 */
int main(void)
{
	int r;

	r = wildcmp("main.c", "*.c");
	printf("%d\n", r);
	r = wildcmp("main.c", "m*a*i*n*.*c*");
	printf("%d\n", r);
	r = wildcmp("main.c", "main.c");
	printf("%d\n", r);
	r = wildcmp("main.c", "m*c");
	printf("%d\n", r);
	r = wildcmp("main.c", "ma*************c");
	printf("%d\n", r);
	r = wildcmp("main.c", "*");
	printf("%d\n", r);
	r = wildcmp("main.c", "***");
	printf("%d\n", r);
	r = wildcmp("main.c", "m.*c");
	printf("%d\n", r);
	r = wildcmp("main.c", "**.*c");
	printf("%d\n", r);
	r = wildcmp("main.c", "ma*in.c");
	printf("%d\n", r);
	r = wildcmp("main.c", "main*d");
	printf("%d\n", r);
	r = wildcmp("main.c", "*b");
	printf("%d\n", r);
	return (0);
}
