#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * Return: Always 0 on success
 */

int main(void)
{
	int num, alp;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}
	for (alp = 97; alp < 103; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
