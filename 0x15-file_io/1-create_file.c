#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on Success. Otherwise -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);

	if (fd == -1)
		return (-1);

	while (text_content[i] != '\0')
	{
		i++;
	}

	write(fd, text_content, i);

	return (1);
}
