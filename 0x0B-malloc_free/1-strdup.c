#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory containing
 * a copy of the string
 * @str: the str to be copied
 * Return: Pointer to the duplicate string on success. Otherwise NULL
 */

char *_strdup(char *str)
{
	char *ptr;
	int size;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size] != '\0'; size++)
		;
	ptr = malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	for (size = 0; str[size] != '\0'; size++)
	{
		*(ptr + size) = str[size];
	}
	ptr[size] = '\0';
	return (ptr);
	free(ptr);
}
