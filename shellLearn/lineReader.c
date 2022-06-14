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
