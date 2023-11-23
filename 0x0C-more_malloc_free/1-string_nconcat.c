#include "main.h"

/**
 * string_nconcat - concatenates 2 strings
 * @s1: string one
 * @s2: string two
 * @n: the number of character to concatenate
 * Return: the newly concatenated string of s1 and n bytes of s2
 * Otherwise NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *new_str;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	new_str = malloc(_strlen(s1) + n);
	if (new_str == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		new_str[i] = s1[i];
	for (j = 0; s2[j] && j < n; j++, i++)
		new_str[i] = s2[j];

	new_str[i] = '\0';
	return (new_str);
}

/**
 * _strlen - computes the length of a string
 * @s: the string
 * Return: the length of s. 0 otherwise;
*/

int _strlen(char *s)
{
	int i = 0;

	for (; s[i]; i++)
		;
	return (i);
}
