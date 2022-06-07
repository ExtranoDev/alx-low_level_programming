#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - prints the environment
 *
 * Return: Always 0
 */
int main(int ac, char **av, char **env)
{
	extern char **environ;

	printf("%p\n", (void *)env);
	printf("%p\n", (void *)environ);
	return (0);
}
