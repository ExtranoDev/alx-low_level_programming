#include "main.h"

/**
 * read_testfile - to read text file
 * @filename: name of file
 * @letters: number of letters to be read
 *
 * Return: lters read or 0 in case of error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
       	ssize_t readLetter, writeLetter;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	buf = malloc(letters + 1);

	if (!buf)
	{
		free(buf);
		return (0);
	}

	readLetter = read(fd, buf, letters);
	if (readLetter == -1)
		return (0);

	writeLetter = write(STDOUT_FILENO, buf, letters);

	free(buf);
	close(fd);

	if (writeLetter == -1)
		return (0);

	return (writeLetter);
}
