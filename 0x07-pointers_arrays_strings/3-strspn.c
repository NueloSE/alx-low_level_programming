#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: the string to be examine
 * @accept: the substring to check for
 * Return: the number of bytes in the initial segment of s that consist
 * only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, byte = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				byte++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (byte);
		}
	}
	return (byte);
}
