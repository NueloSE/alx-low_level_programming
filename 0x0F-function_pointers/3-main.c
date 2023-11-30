#include "3-calc.h"

/**
 * main - Entry point for the program
 * @argc: command line argument count
 * @argv: array of command line arguments
 * Return: 0 on success
*/

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *sign;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	sign = argv[2];

	if (!strchr("+-*/%", *sign))
	{
		printf("Error\n");
		exit(98);
	}

	result = get_op_func(sign)(num1, num2);

	printf("%d\n", result);
	return (0);
}
