#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * Return: Always 0 on success
 */

int main(void)
{
	char letter = 122;

	while (letter > 96)
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
