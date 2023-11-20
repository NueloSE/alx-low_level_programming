#include "main.h"

/**
 * _strdup - duplicates a string to a new location
 * @str: the string
 * Return: a pointer to the new string on success. otherwise NULL
*/

char *_strdup(char *str)
{
	char *str_dup;
	int size, i;

	if (str == NULL)
		return (NULL);
	size = len(str);
	str_dup = malloc(size);

	if (str_dup == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		str_dup[i] = str[i];
	}
	str_dup[i] = '\0';
	return (str_dup);
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
