#include "main.h"

/**
 * main - Entry point; prints all the command line arguments
 * @argc: command line argumnet count
 * @argv: an array of command line arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
