#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to newly allocated space in memory
 * containing the contents of s1 and s2 on success. Otherwise NULL
*/

char *str_concat(char *s1, char *s2)
{
	char *string;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = len(s1) - 1;
	j = len(s2) - 1;

	string = malloc((i + j) + 1);
	if (string == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		string[i] = s1[i];
	for (j = 0; s2[j]; i++, j++)
		string[i] = s2[j];
	string[i] = '\0';

	return (string);
}

/**
 * len - computes the length of a string
 * @str: the string
 * Return: the length of the string
*/

int len(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}
