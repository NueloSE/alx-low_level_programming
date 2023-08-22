#include "main.h"

/**
 * _strlen - prints the length of a string
 * @s: point to the string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
