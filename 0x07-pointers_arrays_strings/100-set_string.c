#include "main.h"

/**
 * set_string - sets the value of a pointer to a character
 * @s: pointer to the pointer we want to change the value
 * @to: the pointer to the value we want
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
