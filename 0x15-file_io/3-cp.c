#include "main.h"

/**
 * main - entry point
 * @ac: number of passed argument
 * @av: passed argument
 * Return: 0 on success.
 */
int main(int ac, char **av)
{
	int fd1, fd2, n_read;
	char *write_err = "Error: Can't write to ";
	char *close_err = "Error: Can't close fd ", *buffer[BUFF_SIZE];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", av[1]);
		exit(98);
	}
	fd2 = open(av[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "%s%s\n", write_err, av[2]);
		exit(99);
	}
	while ((n_read = read(fd1, buffer, BUFF_SIZE)) > 0)
	{
		if ((write(fd2, buffer, BUFF_SIZE)) < BUFF_SIZE)
		{
			dprintf(STDERR_FILENO, "%s%s\n", write_err, av[2]);
			exit(99);
		}
	}
	if (close(fd1) != 0)
	{
		dprintf(STDERR_FILENO, "%s%d\n", close_err, fd1);
		exit(100);
	}
	if (close(fd2) != 0)
	{
		dprintf(STDERR_FILENO, "%s%d\n", close_err, fd2);
		exit(100);
	}
	return (0);
}
