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
	size = sizeof(str) + 1;
	str_dup = malloc(size);

	if (str_dup == NULL)
		return (NULL);
	
	for (i = 0; i < size; i++)
	{
		str_dup[i] = str[i];
	}
	return (str_dup);
}

/**
 * _strlen - compute the length of a string
 * @str: the string
 * Return: length of string on success


int _strlen(char *str)
{
	int len;

	for (len = 0; str[len]; len++)
		;
	return (len);
}*/
