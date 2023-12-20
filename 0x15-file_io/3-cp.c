#include "main.h"

/**
 * copy - copies the content of a file to another file
 * @file_from: file to copy from
 * @file_to: file to copy to
 * Return: always 0
*/

int copy(char *file_from, char *file_to)
{
	char buffer[BUFF_SIZE];
	int fd_from, fd_to, reading = 0;

	if (file_from == NULL)
		exit(error_handler(1, 98, file_from));
	if (file_to == NULL)
		exit(error_handler(2, 99, file_to));
	fd_from = open(file_from, O_RDWR);
	if (fd_from == -1)
	{
		exit(error_handler(1, 98, file_from));
	}
	fd_to = open(file_to, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | 0664);
	if (fd_to == -1)
	{
		exit(error_handler(2, 99, file_to));
	}
	do {
		reading = read(fd_from, &buffer, BUFF_SIZE);
		if (reading == 0)
			break;
		else if (reading == -1)
		{
			exit(error_handler(1, 98, file_from));
		}
		if (write(fd_to, buffer, _strlen(buffer)) == -1)
		{
			exit(error_handler(2, 99, file_from));
		}
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

/**
 * main - Entry point for the code
 * @ac: argument count
 * @av: array of variadic
 * Return: always 0
*/

int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	res = copy(av[1], av[2]);
	return (res);
}
