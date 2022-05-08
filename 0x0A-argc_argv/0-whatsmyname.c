#include <stdio.h>

/**
 * whatsmyname - prints program name
 * @argc: arguement count
 * @argv: arguement array
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
