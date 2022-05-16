#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints opcodes
 * @argc: arguement count
 * @argv: arguement array
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, j;
	char *x;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}
	x = (char *)&main;

	for (j = 0; j < i; j++)
	{
		printf("%.2hhx", x[j]);
		if (j < i - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
