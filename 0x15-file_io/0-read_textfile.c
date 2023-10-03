#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the stdout
 * @filename: a pointer to the file to be printed from
 * @letters: the number of letters it should read and print
 * Return: On success the actual number of letters it read and print
 * Otherwise 0 if it fails
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count = 0;
	size_t nread = 1, rcount = 0;
	int fd;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(letters) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
	{
		free(buffer);
		return (0);
	}
	while (rcount < letters)
	{
		nread = read(fd, buffer + rcount, letters - rcount);
		if (nread <= 0)
			break;
		rcount += nread;
	}
	count = write(STDOUT_FILENO, buffer, rcount);
	free(buffer);
	close(fd);

	return (count);

