#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: the string to check
 * @c: the character to check for
 * Return: If c is found, return pointer to its first occurence or null
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (s + i);

		i++;
	}
	return ('\0');
}
