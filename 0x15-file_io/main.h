#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#if defined(__LP64__)
#define Elfw(type) Elf64_ ## type
#else
#define Elfw(type) Elf32_ ## type
#endif

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int validate(char *file_from);
int _create_file(char *file_to, int fd1);
void copy_file(char *buffer, char *file_from, char *file_to, int fd1, int fd2);
void close_file(char *buffer, int fd);
int is_elf(int *fd, char *elf_file, Elfw(Ehdr) * header);
void print_mag_num(Elfw(Ehdr) header);
void print_class(Elfw(Ehdr) header);
void print_data(Elfw(Ehdr) header);
void print_version(Elfw(Ehdr) header);
void print_OS_ABI(Elfw(Ehdr) header);
void print_ABI_version(Elfw(Ehdr) header);
void print_type(Elfw(Ehdr) header);
void print_EPA_64(Elfw(Ehdr) header);
void print_EPA_32(Elfw(Ehdr) header);

#endif /*MAIN_H*/
