#include "main.h"

/**
 * rev_string - reverse a string
 * @s: the string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0, j = 0, i;
	char tmp;

	while (s[len] != '\0')
	{
		len++;
	}
	/*len = len - 1; */
	i = len / 2;
	len = len - 1;
	for (; j < i; j++, len--)
	{
		tmp = s[j];
		s[j] = s[len];
		s[len] = tmp;
	}
}
