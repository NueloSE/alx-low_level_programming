#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: Always 0 on success
 */

int main(void)
{
	char letter = 97;

	for (; letter < 123; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar('\n');
	return (0);
}
