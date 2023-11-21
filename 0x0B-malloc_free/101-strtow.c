#include "main.h"

/**
 * strtow - splits a string into words
 * @str: the string
 * Return: the address to the array on success otherwise NULL
*/

char **strtow(char *str)
{
	int word_len, i, j, str_position = 0;
	char **words;

	if (str == NULL || _strcmp(str, "") == 0 || _strcmp(str, " ") == 0)
		return (NULL);
	word_len = word_count(str);
	words = malloc((word_len + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	for (i = 0; i < word_len; i++)
	{
		words[i] = malloc(MAX_WORD_COUNT);
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}
	}

	for (i = 0; i < word_len; i++)
	{
		while (str[str_position] == ' ')
			str_position++;
		for (j = 0; str[str_position] != ' ' && str[str_position] != '\0';
			str_position++, j++)
			words[i][j] = str[str_position];
		words[i][j] = '\0';
		str_position++;
	}
	words[word_len] = NULL;
	return (words);

}


/**
 * word_count - computes the number of words in a string
 * @str: the string
 * Return: the number of words on success
*/

int word_count(char *str)
{
	int i = 0, word_count = 0;

	while (str[i] == ' ')
		i++;
	for (; i <= len(str); i++)
	{
		if ((str[i] == ' ' || str[i] == '\0') && str[i - 1] != ' ')
			word_count += 1;
	}
	return (word_count);
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

/**
 * _strcmp - compares 2 strings to check if there is any difference
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if both string are equal
 * negative value if s2 > s1. Otherwise a positive number
*/
int _strcmp(char *s1, char *s2)
{
	int i, length, dif;

	if (len(s1) > len(s2))
		length = len(s1);
	else
		length = len(s2);

	for (i = 0; i < length; i++)
	{
		dif = s1[i] - s2[i];
		if (dif != 0)
			return (dif);
	}
	return (0);
}
