#ifndef SIMPLE_SHELL
#define SIMPLE_SHELL

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <signal.h>

#define BUFFER_MAX 1024

#endif

int main(int argc, char *argv[])
{
	int status = 1;
	size_t size = BUFFER_MAX;
	size_t lenIn = 0;
	char *str;
	char *args[2];

	str = (char *) malloc(size * sizeof(char));

	while (status)
	{
		printf("#cisfun$ ");
		lenIn = getline(&str, &size, stdin);
		str[lenIn - 1] = '\0';
		args[0] = str;
		args[1] = NULL;

		if (fork() == 0)
		{
			if (execve(str, args, NULL) == -1)
			{
				printf("%s: No such file or directory\n", argv[0]);
				kill(0, 0);
			}
		}
		else
			wait(NULL);
		break;
	}
	free(str);
	return (0);
}
