#include "main.h"

/**
 * argstostr - concatenates all the arguments passed with a program
 * @ac: argument count
 * @av: array of command line arguments
 * Return: pointer to new string on success. Otherwise NULL
*/

char *argstostr(int ac, char **av)
{
	int i, size = 0, position = 0;
	char *word;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		size += len(av[i]);
	word = malloc(size + ac + 1);
	if (word == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		_strcpy(av[i], word + position);
		position += (len(av[i]) + 1);
	}
	word[position] = '\0';
	return (word);
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
 * _strcpy - copys one string to another
 * @src: location to copy from
 * @des: location to copy to
 * Return: pointer to newly copied string
*/

char *_strcpy(char *src, char *des)
{
	int i;

	if (src == NULL)
		return (NULL);
	for (i = 0; i < len(src) && src[i]; i++)
	{
		des[i] = src[i];
	}
	des[i] = '\n';
	return (des);
}
