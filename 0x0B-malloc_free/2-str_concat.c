#include "main.h"

/**
 * _len - Compute the length of a string passed
 * @s: string passed
 * Return: The length of the string passed
 */

int _len(char *s)
{
	int count = 0;

	if (s == NULL)
		return (0);
	for (; s[count] != '\0'; count++)
		;
	return (count);
}

/**
 * str_concat - That concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * Return: The concatenated string. Otherwise NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len;
	char *ptr;

	len = _len(s1);
	len += _len(s2);

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1 != NULL && s1[i] != '\0'; i++)
		*(ptr + i) = s1[i];
	for (j = 0; s2 != NULL && s2[j] != '\0'; j++, i++)
		*(ptr + i) = s2[j];

	ptr[i] = '\0';
	return (ptr);
}
