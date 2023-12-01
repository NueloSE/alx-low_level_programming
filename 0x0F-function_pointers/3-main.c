#include "3-calc.h"

/**
 * main - Entry point for the program
 * @argc: command line argument count
 * @argv: array of command line arguments
 * Return: 0 on success
*/

int main(int argc, char *argv[])
{
	int num1, num2;
	char *sign;
	int (*call_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	sign = argv[2];

	if (((strcmp(sign, "/") == 0) || (strcmp(sign, "%") == 0)) && (num2 == 0))
	{
		printf("Error\n");
		return (100);
	}

	call_func = get_op_func(sign);

	if (call_func == NULL)
		exit(99);
	printf("%d\n", call_func(num1, num2));
	exit(0);
	/**
	 * if (!strchr("+-*%", *sign))
	*{
	*	printf("Error\n");
	*	exit(98);
	*}


	*result = get_op_func(sign)(num1, num2);

	*printf("%d\n", result);
	return (0);
	*/
}
