#include "main.h"

/**
 * append_text_to_file - append text to an opened file
 * @filename: name of file
 * @text_content: content to be appended
 *
 * Return: 1 on success and -1 in case of failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, r_letter, i;

	if (!filename)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	if (!text_content)
		return (1);

	for (i = 0; text_content[i] == '\0'; i++)
		;
	r_letter = write(fd, text_content, i);
	if (r_letter == -1)
		return (-1);
	close(fd);
	if (r_letter == -1)
		return (-1);
	return (1);
}
