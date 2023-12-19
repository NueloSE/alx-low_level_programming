#ifndef MAIN_H
#define MAIN_H

#define BUFF_SIZE 1024

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <stdbool.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
size_t _strlen(char *str);
int _putchar(char c);
int error_handler(int num, int exit_val, char *filename);

#endif /*MAIN_H*/
