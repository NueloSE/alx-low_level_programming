#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * Return: Always 0 on success
 */

int main(void)
{
	int num1, num2 = 49;

	for (num1 = 48; num1 <= 56; num1++)
	{
		for (; num2 <= 57; num2++)
		{
			if (num1 != num2)
			{
				putchar(num1);
				putchar(num2);
				if (num1 == 56 && num2 == 57)
					putchar('\n');
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		num2 = num1 + 1;
	}
	return (0);
}
