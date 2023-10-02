#include "main.h"
#include <string.h>

/**
 * create_file - create a file.
 *
 * @filename: name of file to be created.
 * @text_content: NULL terminated string to write to file.
 *
 * Return: 1 (success), -1 (failure).
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t bytes_write, bytes_close;
	int fd = -1;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_TRUNC);
	if (fd == -1)
	{
		fd = open(filename, O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR);
		if (fd == -1)
		{
			return (-1);
		}

		if (text_content)
		{
			bytes_write = write(fd, text_content, strlen(text_content));
			if (bytes_write == -1)
			{
				return (-1);
			}

		}

		bytes_close = close(fd);
		if (bytes_close == -1)
		{
			return (-1);
		}
	}

	return (1);
}
