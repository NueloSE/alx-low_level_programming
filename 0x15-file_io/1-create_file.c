#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: On success 1. Otherwise -1.
*/

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		if (write(fd, text_content, _strlen(text_content)) == -1)
			return (-1);
	}
	return (1);
}

/**
 * _strlen - computes the length of a string
 * @str: the string
 * Return: the length of a string
*/

size_t _strlen(char *str)
{
	size_t len = 0;

	for (; str[len]; len++)
		;
	return (len);
}
