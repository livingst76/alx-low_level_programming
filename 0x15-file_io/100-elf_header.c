#include "main.h"

/**
 * main - print information in header of elf file.
 *
 * @argc: number of command line arguments.
 * @argv: name of programme and elf file.
 *
 * Return: 0 (success), corresponding error code on failure.
 */
int main(int argc, char **argv)
{
	Elfw(Ehdr) header;
	char *elf_file;
	int fd;

	if (argc != 2)
	{
		dprintf(2, "elf_header elf_filename");
		exit(98);
	}

	elf_file = argv[1];
	if (!is_elf(&fd, elf_file, &header))
	{
		dprintf(2, "Error: '%s' is not an elf file.\n", elf_file);
		exit(98);
	}

	return (0);
}

/**
 * is_elf - check if file is a elf file.
 *
 * @fd: pointer to file descriptor.
 * @elf_file: name of elf_file.
 * @header: pointer to header of elf file.
 *
 * Return: file descriptor of elf file, 98 on failure.
 */
int is_elf(int *fd, char *elf_file, Elfw(Ehdr) * header)
{
	int bytes_read = -1;

	*fd = open(elf_file, O_RDONLY);
	if (*fd == -1)
	{
		dprintf(2, "Error: Can't open file %s.\n", elf_file);
		exit(98);
	}

	bytes_read = read(*fd, header, sizeof(header));
	if (bytes_read == -1)
	{
		dprintf(2, "elf_header: Error: Input file '%s' is not readable.",
				elf_file);
		exit(98);
	}

	if (header->e_ident[EI_MAG0] == 0x7f && header->e_ident[EI_MAG1] == 0x45 &&
		header->e_ident[EI_MAG2] == 0x4c && header->e_ident[EI_MAG3] == 0x46)
	{
		return (1);
	}

	return (0);
}
