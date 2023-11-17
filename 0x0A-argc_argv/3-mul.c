#include "main.h"

/**
 * main - Entry point. Computes the multiplication of 2 numbers
 * @argc: command line argument count
 * @argv: array of commandline variables
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	unsigned long result;
	(void) argc;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%ld\n", result);
	return (0);
}
