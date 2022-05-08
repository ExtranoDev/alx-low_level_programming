#include <stdio.h>

/**
 * main - Prints number of arguments
 * @argc: number of arguements
 * @argv: array of arguements
 *
 * Return: Always 0 or 1
 */
int main(int argc, char **argv)
{
	int i = 0, j = 0;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	i = *argv[1] - '0';
	j = *argv[2] - '0';
	printf("%d\n", i * j);
	return (0);
}
