#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdio.h>
#include <stdlib.h>

/************Prototypes*************/
void print_name(char *name, void (*f)(char *));
void array_iterator(int *, size_t, void (*action)(int));
int int_index(int *, int, int (*cmp)(int));


#endif /*FUNCTION_POINTERS_H*/
