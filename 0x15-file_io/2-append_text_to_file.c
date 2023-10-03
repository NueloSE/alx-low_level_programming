#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on Success. -1 Otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0, w_num;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
		return (-1);
	if (fd && text_content == NULL)
		return (1);

	while (text_content[i] != '\0')
		i++;

	w_num = write(fd, text_content, i);
	if (w_num < 0)
		return (-1);

	close(fd);
	return (1);
}
