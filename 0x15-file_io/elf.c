#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdint.h>

typedef struct {
  uint8_t     e_ident[16];         /* Magic number and other info */
  uint16_t    e_type;              /* Object file type */
  uint16_t    e_machine;           /* Architecture */
  uint32_t    e_version;           /* Object file version */
  uint32_t    e_entry;             /* Entry point virtual address */
  uint64_t    e_phoff;             /* Program header table file offset */
  uint64_t    e_shoff;             /* Section header table file offset */
  uint32_t    e_flags;             /* Processor-specific flags */
  uint16_t    e_ehsize;            /* ELF header size in bytes */
  uint16_t    e_phentsize;         /* Program header table entry size */
  uint16_t    e_phnum;             /* Program header table entry count */
  uint16_t    e_shentsize;         /* Section header table entry size */
  uint16_t    e_shnum;             /* Section header table entry count */
  uint16_t    e_shstrndx;          /* Section header string table index */
} Elf64Hdr;
/**
 * print_EPA_64 - print entry point address (64-bit system),
 *                memory address where the program begins
 *                execution after being loaded into memory.
 *
 * @header: ELF file header.
 *
 * Return: Nothing.
 */
void print_EPA_64(/*Elfw(Ehdr) header*/ int fd)
{
	char space = ' ';
	Elf64Hdr header;

	read(fd, &header, sizeof(header));
	printf("%2cEntry point address:%15c", space, space);
	printf("0x%x\n", header.e_entry);
}

int main(int argc, char **argv)
{
	int fd;

	fd = open(argv[1], O_RDONLY);

	print_EPA_64(fd);
}
