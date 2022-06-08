#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _setenv(const char *name, const char *value, int overwrite);

/**
 * main - main function
 * Return: 0 on success
 */
int main()
{
	int i;
	return (0);
}

int _setenv(const char *name, const char *value, int overwrite)
{
	extern char **environ;
	int i, j, is_equal;

	if (!name || !value)
		return (-1);
	for (i = 0; environ[i]; i++)
	{
		is_equal = 1;
		for (j = 0; environ[i][j] != '='; j++)
		{
			if (environ[i][j] == 
