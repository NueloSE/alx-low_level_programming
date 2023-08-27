#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, len1;

	len = 0;
	len1 = 0;

	while (dest[len] != '\0')
		len++;

	while (src[len1] != '\0' && len1 < n)
	{
		dest[len] = src[len1];
		len++;
		len1++;
	}

	dest[len] = '\0';

	return (dest);
}
