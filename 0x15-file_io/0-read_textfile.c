#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file
 * @letters: number of the letters it should read and print
 * Return: actual number of letters read and printed on success. Otherwise 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t i;
	char buff;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	for (i = 0; (i < letters) && (read(fd, &buff, 1) > 0); i++)
	{
		if (write(STDOUT_FILENO, &buff, 1) == -1)
			return (-1);
	}

	if (close(fd) == -1)
		return (-1);
	return (i);
}
