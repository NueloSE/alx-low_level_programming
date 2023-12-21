#include "main.h"

/**
 * print_err - prints error to standard output
 * @exit_val: exit code
 * @message: the error message
 * @filename: name of the file
 * Return: void
*/

void print_err(int exit_val, char *message, char *filename)
{
	dprintf(STDERR_FILENO, message, filename);
	exit(exit_val);
}

/**
 * closing - close a file
 * @fd: file descriptor
 * Return: void
*/

void closing(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Entry point for the program
 * @ac: argument count
 * @argv: list of variadic variables
 * Return: 0 on success.
 * Otherwise 97,98,99,100 for argc, read, write and close error respectively
*/
int main(int ac, char *argv[])
{
	char *file_from, *file_to, buffer[BUFF_SIZE];
	int fd_from, fd_to;
	ssize_t read_byte, write_byte;

	if (ac != 3)
	{
		print_err(97, "Usage: cp file_from file_to\n", "");
	}
	file_from = argv[1], file_to = argv[2];
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		print_err(98, "Error: Can't read from file %s\n", file_from);
	fd_to = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd_to == -1)
	{
		closing(fd_from);
		print_err(99, "Error: Can't write to %s\n", file_to);
	}
	while ((read_byte = read(fd_from, &buffer, BUFF_SIZE)) > 0)
	{
		write_byte = write(fd_to, buffer, read_byte);
		if (read_byte != write_byte)
		{
			closing(fd_from), closing(fd_to);
			print_err(99, "Error: Can't write to %s\n", file_to);
		}
	}
	if (read_byte == -1)
	{
		closing(fd_from), closing(fd_to);
		print_err(98, "Error: Can't read from file %s\n", file_from);
	}
	closing(fd_from), closing(fd_to);
	return (0);
}
