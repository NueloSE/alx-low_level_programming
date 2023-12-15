#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n;
	int i;

    n = 1024;
    set_bit(&n, 5);
    printf("%lu\n", n);
    n = 0;
    i = set_bit(&n, 10);
    printf("%lu\n\treturn value: %d\n", n, i);
    n = 98;
    i = set_bit(&n, 39);
    printf("%lu\n\treturn value: %d\n", n, i);
    return (0);
}