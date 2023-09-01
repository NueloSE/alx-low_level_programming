#include "main.h"

/**
 * _memcpy - copy memory area from src to dest
 * @dest: the memory area the characters are copied to
 * @src: the memory area the characters are copied from
 * @n: the number of bytes to copy
 * Return: pointer to destination memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
