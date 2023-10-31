#include "main.h"

/**
 * read_textfile - Reads and prints contents of a text file to stdout.
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 * Return: actual number of letters read and printed, or 0 on error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_r, bytes_wr;
	char buffer[BUFSIZ];
	int f_d;

	if (filename == NULL)
	{
		return (0);
	}

	f_d = open(filename, O_RDONLY);
	if (f_d == -1)
	{
		return (0);
	}

	bytes_r = read(f_d, buffer, letters);
	if (bytes_r == -1)
	{
		close(f_d);
		return (0);
	}

	bytes_wr = write(STDOUT_FILENO, buffer, bytes_r);
	if (bytes_wr < bytes_r)
	{
		close(f_d);
		return (0);
	}

	close(f_d);
	return (bytes_r);
}
