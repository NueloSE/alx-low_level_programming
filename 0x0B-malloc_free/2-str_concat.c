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

	string = malloc(sizeof(s1) + sizeof(s2));
	if (string == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
	{
		string[i] = s1[i];
	}

	for (j = 0; s2[j]; i++, j++)
	{
		string[i] = s2[j];
	}
	string[i] = '\0';

	return (string);
}
