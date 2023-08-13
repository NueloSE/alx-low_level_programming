#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point to the program
 * Return: Always 0 on Success
 */

int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
		if (num == 57)
			putchar('\n');
		else
		{
			putchar(44);
			putchar(32);
		}
	}
	return (0);
}
