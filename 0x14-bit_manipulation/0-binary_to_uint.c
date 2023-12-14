#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to the string
 * Return: the converted number on success. Otherwise 0
*/

unsigned int binary_to_uint(const char *b)
{
	int len, i, num;
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	len = _strlen(b) - 1;

	for (i = 0; b[i]; i++, len--)
	{
		if (b[i] < '0' || b[i] > '9')
			return (0);
		num = char_to_int(b[i]);
		result = result | (num << len);
	}
	return (result);
}

/**
 * char_to_int - converts a character to int
 * @c: the character
 * Return: the converted int
*/

int char_to_int(char c)
{
	return (c - '0');
}

/**
 * _strlen - computes the length of a string
 * @str: the string
 * Return: the length of a string
*/

int _strlen(const char *str)
{
	int count = 0;

	for (; str[count]; count++)
		;
	return (count);
}
