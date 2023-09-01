#include "main.h"

/**
 *_memset - fill memory with a constant byte
 *@s: the pointer to the memory area
 *@b: the character representing the constant byte
 *@n: the amount of bytes in memory to be filled
 * Return: the pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
