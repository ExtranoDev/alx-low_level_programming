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
