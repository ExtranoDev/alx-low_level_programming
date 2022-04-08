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
	
	printf("Size of a char: %d byte(s)", (unsigned long) sizeof(y));
	printf("Size of a int: %d byte(s)", (unsigned long) sizeof(x));
	printf("Size of a long int: %d byte(s)", (unsigned long) sizeof(w));
	printf("Size of a long long int: %d byte(s)", (unsigned long) sizeof((long) w));
	printf("Size of a float: %d byte(s)", (unsigned long) sizeof((float) u));

	return (0);
}

