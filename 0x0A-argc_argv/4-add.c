#include "main.h"

/**
 * main - entry point
 * @argc: command line argument count
 * @argv: array of argument varaiable
 * Return: 0 on Success
 */

int main(int argc, char *argv[])
{
	int result = 0, num, i;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (num)
			result += num;
		else
		{
			printf("Error\n");
			return (0);
		}
	}
	printf("%d\n", result);
	return (0);
}
