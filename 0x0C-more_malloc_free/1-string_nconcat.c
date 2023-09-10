#include "main.h"

/**
 * _len - Computes the length of a string
 * @s: The string to compute the length
 * Return: Length of string on success. Otherwise 0.
 */

unsigned int _len(char *s)
{
	unsigned int i;

	if (s == NULL)
		return (0);
	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * string_nconcat - A function that concatenates two strings
 * @s1: Destination string
 * @s2: Source string
 * @n: The number of characters to concatenate from s2 to s1
 * Return: A pointer to newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, len;

	if (n >= _len(s2))
		len = _len(s1) + _len(s2);
	else
		len = _len(s1) + n;

	ptr = malloc((len + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1 != NULL && s1[i] != '\0'; i++)
		*(ptr + i) = s1[i];

	for (j = 0; s2 != NULL && i < len; j++, i++)
		*(ptr + i) = s2[j];

	ptr[i] = '\0';

	return (ptr);
}
