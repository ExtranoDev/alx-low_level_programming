
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
