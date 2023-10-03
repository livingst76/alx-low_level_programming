#include <string.h>
#include "main.h"

/**
 * append_text_to_file - append text at the end of file.
 *
 * @filename: name of file to be appended.
 * @text_content: NULL terminated string to write to file.
 *
 * Return: 1 (success), -1 (failure).
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t bytes_write;
	int fd = -1, bytes_close = -1;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		bytes_write = write(fd, text_content, strlen(text_content));
		if (bytes_write == -1)
		{
			bytes_close = close(fd);
			if (bytes_close == -1)
			{
				return (-1);
			}
			return (-1);
		}
	}

	bytes_close = close(fd);
	if (bytes_close == -1)
	{
		return (-1);
	}

	return (1);
}
