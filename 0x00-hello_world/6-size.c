#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints byte of different data types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char y;
	int x;
	long int w;
	long long t
	double u;
	
	printf("Size of a char: %d byte(s)\n", sizeof(y));
	printf("Size of a int: %d byte(s)\n", sizeof(x));
	printf("Size of a long int: %d byte(s)\n", sizeof(w));
	printf("Size of a long long int: %d byte(s)\n", sizeof(t));
	printf("Size of a float: %d byte(s)\n", sizeof((float) u));

	return (0);
}

