#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - read a text file and print it to the POSIX standard output
 *
 * @filename: name of text file
 * @letters: number of letters to be read and printed
 *
 * Return: number of letters read and printed, 0 on error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t bytes_read = 0, bytes_print = 0;
	int fd;

	if (!filename)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * (letters + 1));
	if (!buffer)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY, S_IRUSR);
	if (fd < 0)
	{
		return (0);
	}

	bytes_read = read(fd, buffer, letters);
	if (bytes_read < 0)
	{
		return (0);
	}

	bytes_print = write(1, buffer, letters);
	if (bytes_print < 0)
	{
		return (0);
	}

	return (bytes_print > bytes_read ? bytes_read : bytes_print);
}
