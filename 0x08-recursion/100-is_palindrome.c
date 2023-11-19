#include "main.h"

/**
 * len - computes the length of a string
 * @s: the string
 * Return: length of s on success. 0 Otherwise
*/

int len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + len((s + 1)));
}

/**
 * palindrome_check - performs character by character checks on a string
 * @s: the string
 * @n1: start index
 * @n2: ending index
 * Return: 1 if palidrome. 0 Otherwise
*/

int palindrome_check(char *s, int n1, int n2)
{
	if (n1 > n2)
		return (1);
	if (s[n1] != s[n2])
		return (0);
	return (palindrome_check(s, n1 + 1, n2 - 1));
}

/**
 * is_palindrome - checks a string to determine if it is palindrome
 * @s: the string
 * Return: 1 if palidrome. 0 otherwise
*/
int is_palindrome(char *s)
{
	int start, end;

	start = 0;
	end = len(s) - 1;
	return (palindrome_check(s, start, end));
}
