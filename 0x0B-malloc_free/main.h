#ifndef MAIN_H
#define MAIN_H

#define MAX_WORD_COUNT 20

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int, int);
void free_grid(int **, int);
char *argstostr(int ac, char **);
char **strtow(char *str);

/****************UTILITIES********************/
int len(char *str);
char *_strcpy(char *src, char *des);
int word_count(char *str);
int _strcmp(char *s1, char *s2);

#endif /* MAIN_H */
