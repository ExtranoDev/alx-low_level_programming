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
	double u;
	
	printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(y));
	printf("Size of a int: %lu byte(s)\n", (unsigned long) sizeof(x));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long) sizeof(w));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(long w));
	printf("Size of a float: %lu byte(s)\n", (unsigned long) sizeof((float) u));

	return (0);
}

