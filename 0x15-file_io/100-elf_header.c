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
	int fd, file_close;

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

	printf("ELF Header:\n");
	print_mag_num(header);
	print_class(header);
	print_data(header);
	print_version(header);
	print_OS_ABI(header);
	print_ABI_version(header);
	print_type(header);
	print_EPA(header);
	file_close = close(fd);
	if (file_close == -1)
	{
		dprintf(2, "Error: %s could not be closed\n", elf_file);
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

/**
 * print_mag_num - print magic number in header of ELF file
 *
 * @header: ELF file header.
 *
 * Return: nothing.
 */
void print_mag_num(Elfw(Ehdr) header)
{
	int i;
	char space = ' ';

	printf("%2cMagic:%2c", space, space);
	for (i = 0; i < EI_NIDENT; i++) /* EI_NIDENT = 16 */
	{
		printf(" %02x", header.e_ident[i]);
	}
	putchar('\n');
}

/**
 * print_class - print file bit format.
 *
 * @header: ELF file header.
 *
 * Return: Nothing.
 */
void print_class(Elfw(Ehdr) header)
{
	char space = ' ';

	printf("%2cClass:%29c", space, space);
	if (header.e_ident[EI_CLASS] == 0x01)
	{
		printf("ELF32\n");
	}
	else if (header.e_ident[EI_CLASS] == 0x02)
	{
		printf("ELF64\n");
	}
}
/**
 * print_data - print endianness of file.
 *
 * @header: ELF file header.
 *
 * Return: Nothing.
 */
void print_data(Elfw(Ehdr) header)
{
	char space = ' ';

	printf("%2cData:%30c", space, space);
	if (header.e_ident[EI_DATA] == 1)
	{
		printf("2's complement, little endian\n");
	}
	else if (header.e_ident[EI_DATA] == 2)
	{
		printf("2's complement, big endian\n");
	}
}
/**
 * print_version - print the ELF header version number.
 *
 * @header: ELF file header.
 *
 * Return: Nothing.
 */
void print_version(Elfw(Ehdr) header)
{
	char space = ' ';

	printf("%2cVersion:%27c", space, space);
	if (header.e_ident[EI_VERSION] == EV_CURRENT)
	{
		printf("%i (current)\n", EV_CURRENT);
	}
	else
	{
		exit(98);
	}
}
/**
 * print_OS_ABI - print the operating system and
 *                ABI to which object is targeted.
 *
 * @header: ELF file header.
 *
 * Return: Nothing.
 */
void print_OS_ABI(Elfw(Ehdr) header)
{
	char space = ' ';

	printf("%2cOS/ABI:%28c", space, space);
	if (header.e_ident[EI_OSABI] == ELFOSABI_NONE ||
		header.e_ident[EI_OSABI] == ELFOSABI_SYSV)
		printf("UNIX - System V\n");
	else if (header.e_ident[EI_OSABI] == ELFOSABI_HPUX)
		printf("UNIX - HP-UX\n");
	else if (header.e_ident[EI_OSABI] == ELFOSABI_NETBSD)
		printf("UNIX - NetBSD\n");
	else if (header.e_ident[EI_OSABI] == ELFOSABI_LINUX)
		printf("UNIX - Linux\n");
	else if (header.e_ident[EI_OSABI] == ELFOSABI_SOLARIS)
		printf("UNIX - Solaris\n");
	else if (header.e_ident[EI_OSABI] == ELFOSABI_IRIX)
		printf("UNIX - IRIX\n");
	else if	(header.e_ident[EI_OSABI] == ELFOSABI_FREEBSD)
		printf("UNIX - FreeBSD\n");
	else if	(header.e_ident[EI_OSABI] == ELFOSABI_TRU64)
		printf("UNIX - TRU64\n");
	else if	(header.e_ident[EI_OSABI] == ELFOSABI_ARM)
		printf("ARM\n");
	else if	(header.e_ident[EI_OSABI] == ELFOSABI_STANDALONE)
		printf("Standalone App\n");
	else
		printf("<unknown: 53>\n");
}

/**
 * print_ABI_version - print the version of the ABI to
 *                     which the object is targeted.
 *
 * @header: ELF file header.
 *
 * Return: Nothing.
 */
void print_ABI_version(Elfw(Ehdr) header)
{
	char space = ' ';

	printf("%2cABI Version:%23c", space, space);
	printf("%i\n", header.e_ident[EI_ABIVERSION]);
}

/**
 * print_type - print object file type
 *
 * @header: ELF file header.
 *
 * Return: Nothing.
 */
void print_type(Elfw(Ehdr) header)
{
	char space = ' ';

	printf("%2cType:%30c", space, space);
	if (header.e_type == ET_DYN)
	{
		printf("DYN (Shared object file)\n");
	}
	else if (header.e_type == ET_REL)
	{
		printf("REL (Relocatable file)\n");
	}
	else if (header.e_type == ET_EXEC)
	{
		printf("EXEC (Executable file)\n");
	}
	else if (header.e_type == ET_NONE)
	{
		printf("NONE\n");
	}
	else if (header.e_type == ET_CORE)
	{
		printf("CORE (Core file)\n");
	}
}

/**
 * print_EPA - print the entry point address, the memory address where
 *             the program begins execution after being loaded into memory.
 *
 * @header: ELF file header.
 *
 * Return: Nothing.
 */
void print_EPA(Elfw(Ehdr) header)
{
	char space = ' ';

	printf("%2cEntry point address:%15c", space, space);
	printf("0x%lx\n", header.e_entry);
}
