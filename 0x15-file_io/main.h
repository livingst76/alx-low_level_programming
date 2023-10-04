#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int validate(char *file_from);
int _create_file(char *file_to, int fd1);
void copy_file(char *buffer, char *file_from, char *file_to, int fd1, int fd2);
void close_file(char *buffer, int fd);

#endif /*MAIN_H*/
