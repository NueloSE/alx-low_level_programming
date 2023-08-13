#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: Always 0 on success
 */

int main(void)
{
	char alp = 97;

	while (alp < 123)
	{
		putchar(alp);
		alp++;
	}
	putchar('\n');
	return (0);
}
