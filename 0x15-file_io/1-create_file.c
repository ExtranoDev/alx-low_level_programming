#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: content to be copied to file
 *
 * Return: 1 on success -1 in case of errors
 */
int create_file(const char *filename, char *text_content)
{
	int fd, r_letter, i;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		r_letter = write(fd, text_content, i);

		if (r_letter == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
