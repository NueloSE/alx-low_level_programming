#include <unistd.h>
#include <string.h>


/**
 * main - Entry point of the program
 * Return: Always 0 on success
 */

int main(void)
{
	const char *text;

	text = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, text, 59);
	return (1);
}
