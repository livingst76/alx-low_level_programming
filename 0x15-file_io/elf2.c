#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct Elf32Hdr{
  uint8_t     e_ident[16];         /* Magic number and other info */
  uint16_t    e_type;              /* Object file type */
  uint16_t    e_machine;           /* Architecture */
  uint32_t    e_version;           /* Object file version */
  uint32_t    e_entry;             /* Entry point virtual address */
  uint32_t    e_phoff;             /* Program header table file offset */
  uint32_t    e_shoff;             /* Section header table file offset */
  uint32_t    e_flags;             /* Processor-specific flags */
  uint16_t    e_ehsize;            /* ELF header size in bytes */
  uint16_t    e_phentsize;         /* Program header table entry size */
  uint16_t    e_phnum;             /* Program header table entry count */
  uint16_t    e_shentsize;         /* Section header table entry size */
  uint16_t    e_shnum;             /* Section header table entry count */
  uint16_t    e_shstrndx;          /* Section header string table index */
} Elf32Hdr;

int is_elf(int *fd, char *elf_file, Elf32Hdr *header)
{
	int bytes_read = -1;

	*fd = open(elf_file, O_RDONLY);
	if (*fd == -1)
	{
		dprintf(2, "Error: Can't open file %s.\n", elf_file);
		exit(98);
	}

	bytes_read = read(*fd, header, sizeof(Elf32Hdr));
	if (bytes_read == -1)
	{
		dprintf(2, "elf_header: Error: Input file '%s' is not readable.",
				elf_file);
		exit(98);
	}

	if (header->e_ident[0] == 0x7f && header->e_ident[1] == 0x45 &&
		header->e_ident[2] == 0x4c && header->e_ident[3] == 0x46)
	{
		return (1);
	}

	return (0);
}

void print_mag_num(Elf32Hdr *header)
{
	int i;
	char space = ' ';

	printf("%2cMagic:%2c", space, space);
	for (i = 0; i < 16; i++) /* EI_NIDENT = 16 */
	{
		printf(" %02x", header->e_ident[i]);
	}
	printf("\n");
}

void print_class(Elf32Hdr *header)
{
	char space = ' ';

	printf("%2cClass:%29c", space, space);
	if (header->e_ident[4] == 0x01)
	{
		printf("ELF32\n");
	}
	else if (header->e_ident[4] == 0x02)
	{
		printf("ELF64\n");
	}
}

void print_data(Elf32Hdr *header)
{
	char space = ' ';

	printf("%2cData:%30c", space, space);
	if (header->e_ident[5] == 1)
	{
		printf("2's complement, little endian\n");
	}
	else if (header->e_ident[5] == 2)
	{
		printf("2's complement, big endian\n");
	}
}

void print_version(Elf32Hdr *header)
{
	char space = ' ';

	printf("%2cVersion:%27c", space, space);
	if (header->e_ident[6] == 1)
	{
		printf("%i (current)\n", header->e_ident[6]);
	}
	else
	{
		printf("%i\n", header->e_ident[6]);
	}
}

void print_OS_ABI(Elf32Hdr *header)
{
	char space = ' ';

	printf("%2cOS/ABI:%28c", space, space);
	if (header->e_ident[7] == 0)
		printf("UNIX - System V\n");
	else if (header->e_ident[7] == 1)
		printf("UNIX - HP-UX\n");
	else if (header->e_ident[7] == 2)
		printf("UNIX - NetBSD\n");
	else if (header->e_ident[7] == 3)
		printf("UNIX - Linux\n");
	else if (header->e_ident[7] == 6)
		printf("UNIX - Solaris\n");
	else if (header->e_ident[7] == 8)
		printf("UNIX - IRIX\n");
	else if	(header->e_ident[7] == 9)
		printf("UNIX - FreeBSD\n");
	else if	(header->e_ident[7] == 10)
		printf("UNIX - TRU64\n");
	else if	(header->e_ident[7] == 97)
		printf("ARM\n");
	else if	(header->e_ident[7] == 255)
		printf("Standalone App\n");
	else
		printf("<unknown: 53>\n");
}

void print_ABI_version(Elf32Hdr *header)
{
	char space = ' ';

	printf("%2cABI Version:%23c", space, space);
	printf("%i\n", header->e_ident[8]);
}

void print_type(Elf32Hdr *header)
{
	char space = ' ';

	printf("%2cType:%30c", space, space);
	if (header->e_type == 3)
	{
		printf("DYN (Shared object file)\n");
	}
	else if (header->e_type == 1)
	{
		printf("REL (Relocatable file)\n");
	}
	else if (header->e_type == 2)
	{
		printf("EXEC (Executable file)\n");
	}
	else if (header->e_type == 0)
	{
		printf("NONE\n");
	}
	else if (header->e_type == 4)
	{
		printf("CORE (Core file)\n");
	}
}

/**
 * print_EPA_64 - print entry point address (64-bit system),
 *                memory address where the program begins
 *                execution after being loaded into memory.
 *
 * @header: ELF file header.
 *
 * Return: Nothing.
 */
void print_EPA_64(Elf32Hdr *header)
{
	char space = ' ';

	printf("%2cEntry point address:%15c", space, space);
	printf("0x%x\n", header->e_entry);
}

int main(int argc, char **argv)
{
	Elf32Hdr header;
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
	print_mag_num(&header);
	print_class(&header);
	print_data(&header);
	print_version(&header);
	print_OS_ABI(&header);
	print_ABI_version(&header);
	print_type(&header);
	print_EPA_64(&header);

	return(0);
}
