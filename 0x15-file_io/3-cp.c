#include "main.h"

/**
 * main - create the copy bash script
 * @ac: argument count
 * @av: arguments as strings
 * Return: 0
 */
int main(int ac, char *av[])
{
	int in_fd, out_fd, r_letter, w_letter;
	char buf[RSIZE];
	mode_t mode;

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (ac != 3)
	{
		dprintf(STDERR, "Usage: cp file_from file_to\n");
		exit(97);
	}
	in_fd = open(av[1], O_RDONLY);

	if (in_fd == -1)
	{
		dprintf(STDERR, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	out_fd = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, mode);

	if (out_fd == -1)
	{
		dprintf(STDERR, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	do {
		r_letter = read(in_fd, buf, RSIZE);
		if (r_letter == -1)
		{
			dprintf(STDERR, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		if (r_letter > 0)
		{
			w_letter = write(out_fd, buf, (ssize_t) r_letter);
			if (w_letter == -1)
			{
				dprintf(STDERR, "Error: Can't write to %s\n", av[2]);
				exit(99);
			}
		}
	} while (r_letter > 0);

	r_letter = close(in_fd);
	if (r_letter == -1)
	{
		dprintf(STDERR, "Error: Can't close fd %d\n", in_fd);
		exit(100);
	}
	w_letter = close(out_fd);
	if (w_letter == -1)
	{
		dprintf(STDERR, "Error: Can't close fd %d\n", out_fd);
		exit(100);
	}

	return (0);
}
