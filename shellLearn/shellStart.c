#ifndef SIMPLE_SHELL
#define SIMPLE_SHELL

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <signal.h>
#include <string.h>

#define BUFFER_MAX 1024
#define DELIM " \n\t\a\r"

#endif

void looper(char *args);
char *prompt(void);
char **prompt_splitter(char *args);
int execute_com(char **args, char *argv1);

/**
 * main - executes the program
 * @argc: number of main arguements
 * @argv: array of arguements
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	looper(argv[0]);
	return (0);
}

/**
 * looper - main shell loop
 * @argv: comandline arguement
 */
void looper(char *args)
{
	int status = 1;
	char *str;
	char **str_split;

	while (status)
	{
		printf("$ ");
		str = prompt();
		str_split = prompt_splitter(str);
		status = execute_com(str_split, args); 
	}

	free(str);
	free(str_split);
}

/**
 * execute_com - executes user's command
 * @args: array of commands
 *
 * Return: program status
 */
int execute_com(char **args, char *argv1)
{
	pid_t pid;
	int status;
	char str[] = "/bin/";
	char *arg;

	if (args[0] == NULL)
		return (1);

	pid = fork();
	if (pid == 0)
	{
		if (args[0][0] != '/')
		{
			strcat(str, args[0]);
			arg = str;
		}
		else
			arg = args[0];

		if (execve(arg, args, NULL) == -1)
			printf("%s: No such file or directory\n", argv1);
		exit(EXIT_FAILURE);
	}
	else if (pid < 0)
		printf("%s: No such file or directory\n", argv1);
	else
	{
		wait(&status);
	}

	return (1);
}


/**
 * prompt_splitter - splits string into commands
 * @args: string of commands
 *
 * Returns: pointer to array of command pointers
 */
char **prompt_splitter(char *args)
{
	int buffSize = BUFFER_MAX, tracker = 0;
	char **coms = malloc(sizeof(char) * buffSize);
	char *com;

	if (!coms)
		exit(EXIT_FAILURE);

	com = strtok(args, DELIM);
	while (com != NULL)
	{
		coms[tracker] = com;
		tracker++;

		if (tracker == buffSize)
		{
			buffSize += BUFFER_MAX;
			coms = realloc(coms, buffSize);
			if (!coms)
				exit(EXIT_FAILURE);
		}
		com = strtok(NULL, DELIM);
	}
	coms[tracker] = NULL;
	return (coms);
}

/**
 * prompt - reads commands from user
 */
char *prompt(void)
{
	int buffSize = BUFFER_MAX;
	int tracker = 0;
	char *buffer = malloc(sizeof(char) * buffSize);
	int c;

	if (!buffer)
		exit(EXIT_FAILURE);

	while (1)
	{
		c = getchar();

		if (c == EOF || c == '\n')
		{
			buffer[tracker] = '\0';
			if (feof(stdin))
				exit(EXIT_SUCCESS);
			return (buffer);
		}
		else
			buffer[tracker] = c;
		tracker++;

		if (tracker == buffSize)
		{
			buffSize += BUFFER_MAX;
			buffer = realloc(buffer, buffSize);
			if (!buffer)
				exit(EXIT_FAILURE);
		}
	}
}
