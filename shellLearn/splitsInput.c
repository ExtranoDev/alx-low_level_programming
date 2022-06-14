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
