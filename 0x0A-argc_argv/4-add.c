#include "main.h"

/**
 * main - entry point
 * @argc: command line argument count
 * @argv: array of argument varaiable
 * Return: 0 on Success
 */

int main(int argc, char *argv[])
{
	int result = 0, i, j;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}

	printf("%d\n", result);
	return (0);
}
