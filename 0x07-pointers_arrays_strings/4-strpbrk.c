#include "main.h"

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: the string to be checked
 * @accept: the string containing the byte to check
 * Return: pointer to the first bytes else null if no byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return ('\0');
}
