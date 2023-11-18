#include "main.h"

/**
 * main - entry point
 * @argc: command line argument count
 * @argv: array of commandline variables
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i, bal, num = 0, coins[] = {25, 10, 5, 2, 1};

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	bal = atoi(argv[1]);

	if (bal <= 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		num += bal / coins[i];
		bal = bal % coins[i];
	}
	printf("%d\n", num);
	return (0);
}
