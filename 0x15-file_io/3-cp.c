#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * main - copy the content of one file to another.
 *
 * @argc: number of command line arguments.
 * @argv: command line arguments.
 *
 * Return: 0 (success),
 *		   97 (argc not equals to 3),
 *		   98 (file to be copied from does not exist),
 *		   99 (cannot create file to be copied to),
 *		   100 (file descriptor could not be closed).
 */
int main(int argc, char **argv)
{
	char *buffer;
	int fd1 = -1, fd2 = -1;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/* file_from */
	fd1 = validate(argv[1]);

	/* file_to */
	fd2 = _create_file(argv[2], fd1);

	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
	{
		close_file(buffer, fd1);
		close_file(buffer, fd2);
		exit(101);
	}

	copy_file(buffer, argv[1], argv[2], fd1, fd2);
	return (0);
}

/**
 * validate - check if file exists; open if it does.
 *
 * @file_from: file to be validated.
 *
 * Return: file descriptor value, -1 on failure.
 */
int validate(char *file_from)
{
	int fd = -1;

	fd = open(file_from, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	return (fd);
}

/**
 * _create_file - create a file; truncate it if it exists.
 *
 * @file_to: file to be created to copy into.
 * @fd1: file descriptor of file to be copied.
 *
 * Return: file descriptor value, -1 on failure.
 */
int _create_file(char *file_to, int fd1)
{
	mode_t mode;
	int fd2 = -1;

	/* Permissions of file_to */
	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	/* file_to */
	fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (fd2 == -1)
	{
		close_file(NULL, fd1);
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	return (fd2);
}

/**
 * copy_file - copy content of old file (file_from) into new file (file_to).
 *
 * @buffer: holds the content of file_to to be copied in chunks of 1024 bytes.
 * @file_from: file to be copied from.
 * @file_to: file to copied into.
 * @fd1: file descriptor of file_to.
 * @fd2: file descriptor of file_from.
 *
 * Return: nothing.
 */
void copy_file(char *buffer, char *file_from, char *file_to, int fd1, int fd2)
{
	ssize_t bytes_write = -1, bytes_read = -1;

	do {
		bytes_read = read(fd1, buffer, 1024);
		if (bytes_read == -1)
		{
			close_file(buffer, fd1);
			dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n",
					file_from);
			free(buffer);
			exit(98);
		}

		bytes_write = write(fd2, buffer, bytes_read);
		if (bytes_write == -1)
		{
			close_file(buffer, fd1);
			close_file(buffer, fd2);
			dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", file_to);
			free(buffer);
			exit(99);
		}

		buffer = memset(buffer, 0, 1024);

	} while (bytes_read == 1024);

	close_file(buffer, fd1);
	close_file(buffer, fd2);
	free(buffer);
}

/**
 * close_file - close opened file.
 *
 * @fd: file descriptor value of file.
 * @buffer: holds the content of file_to to be copied in chunks of 1024 bytes.
 *
 * Return: nothing.
 */
void close_file(char *buffer, int fd)
{
	int bytes_close = -1;

	bytes_close = close(fd);
	if (bytes_close == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %i\n", fd);
		if (buffer)
		{
			free(buffer);
		}
		exit(100);
	}
}
