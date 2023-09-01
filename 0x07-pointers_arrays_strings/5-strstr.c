#include "main.h"

/**
 * _strstr - locates a substring in a string
 * @haystack: the string to be examined
 * @needle: the substring to be searched for
 * Return: pointer to the start of the located string or null if not found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		for (i = 0; *(haystack + i) == *(needle + i); i++)
		{
			if (!*(needle + i + 1))
				return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
