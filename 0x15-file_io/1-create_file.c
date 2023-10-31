#include "main.h"
#include <string.h>

/**
 * create_file - Creates a file.
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int f_d;
	ssize_t bytes_wr;

	if (filename == NULL)
	{
		return (-1);
	}

	f_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f_d == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		bytes_wr = write(f_d, text_content, strlen(text_content));
		if (bytes_wr == -1)
		{
			close(f_d);
			return (-1);
		}
	}

	close(f_d);
	return (1);
}
