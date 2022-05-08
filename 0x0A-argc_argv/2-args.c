#include <stdio.h>

/**
 * main - Prints number of arguments
 * @argc: number of arguements
 * @argv: array of arguements
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
