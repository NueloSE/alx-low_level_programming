#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: Always 0 on success
 */

int main(void)
{
	char lowercase = 97, uppercase = 65;

	while (lowercase < 123)
	{
		putchar(lowercase);
		lowercase++;
	}
	for (; uppercase < 91; uppercase++)
	{
		putchar(uppercase);
	}
	putchar('\n');
	return (0);
}
