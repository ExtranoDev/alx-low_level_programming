#include <stdio.h>

/**
 * main - prints program name
 * @argc: arguement count
 * @argv: arguement array
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
