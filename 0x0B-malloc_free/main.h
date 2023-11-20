#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int, int);
void free_grid(int **, int);
char *argstostr(int ac, char **);
char **strtow(char *str);

int len(char *str);

#endif /* MAIN_H */
