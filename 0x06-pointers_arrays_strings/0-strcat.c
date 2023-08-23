#include "main.h"

/**
 * _strcat - appends the src string to the dest
 * @dest: the destination string
 * @src: the source string
 * Return: the concatd string
 */

char *_strcat(char *dest, char *src)
{
	int des_len = 0, src_len;

	while (dest[des_len] != '\0')
	{
		des_len++;
	}
	for (src_len = 0; src[src_len] != '\0'; src_len++, des_len++)
	{
		dest[des_len] = src[src_len];
	}
	dest[des_len] = '\0';
	return (dest);
}
