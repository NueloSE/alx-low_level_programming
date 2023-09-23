#include <unistd.h>
#include <string.h>
#include <sys/syscall.h>

/**
 * custom_print - A function that prints to the std output
 * @str: A point to the string to be printed
 * Return: Always 0 on success
 */

void custom_print(const char *str)
{
	if (str != NULL)
		syscall(SYS_write, STDERR_FILENO, str, strlen(str));
}

/**
 * main - Entry point of the program
 * Return: Always 0 on success
 */

int main(void)
{
	const char *text;

	text = "and that piece of art is useful\" - Dora korpar, 2015-10-19\n";

	custom_print(text);
	return (1);
}
