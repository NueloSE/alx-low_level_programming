#include "main.h"

/**
 * error_handler - prints the appropriate err message
 * @num: case specifier
 * @exit_val: the exit value
 * @filename: name of the file
 * Return: the exit value passed
*/

int error_handler(int num, int exit_val, char *filename)
{
	switch (num)
	{
		case (1):
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
			return (exit_val);
		case (2):
			dprintf(STDERR_FILENO, "Error: Can't write to  %s\n", filename);
			return (exit_val);
		case (3):
			dprintf(STDERR_FILENO, "%sCan't close fd  %d\n", filename, exit_val);
			return (100);
		case (4):
			dprintf(STDERR_FILENO, "%sCan't close fd  %d\n", filename, exit_val);
			return (100);
	}
	return (1);
}

/**
 * main - Entry point for the code
 * @ac: argument count
 * @av: array of variadic
 * Return: always 0
*/

int main(int ac, char **av)
{
	char buffer[1024];
	int fd_from, fd_to, reading = 0;
	char *file_from, *file_to;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	file_from = av[1], file_to = av[2];
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		exit(error_handler(1, 98, file_from));
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (fd_to == -1)
	{
		exit(error_handler(2, 99, file_to));
	}
	do {
		reading = read(fd_from, &buffer, 1024);
		if (reading == 0)
			break;
		else if (reading == -1)
			exit(error_handler(1, 98, file_from));
		if (write(fd_to, buffer, reading) == -1)
			exit(error_handler(2, 99, file_from));
	} while (true);
	if (close(fd_from) == -1)
	{
		exit(error_handler(4, fd_from, "Error: "));
	}
	if (close(fd_to) == -1)
	{
		exit(error_handler(3, fd_to, "Error: "));
	}
	return (0);
}
