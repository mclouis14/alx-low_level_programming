#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: name of the file to append to
 * @text_content: NULL terminated string to append to the file
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f_d;
	int bytes_wr;
	int letr;

	if (!filename)
		return (-1);

	f_d = open(filename, O_WRONLY | O_APPEND);

	if (f_d == -1)
		return (-1);

	if (text_content)
	{
		for (letr = 0; text_content[letr]; letr++)
			;

		bytes_wr = write(f_d, text_content, letr);

		if (bytes_wr == -1)
			return (-1);
	}

	close(f_d);

	return (1);
}
