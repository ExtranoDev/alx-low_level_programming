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
	if (argv[argc - 1])
		printf("%d\n", argc - 1);
	else
		printf("0");
	return (0);
}
