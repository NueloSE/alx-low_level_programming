#include "lists.h"

/**
 * before_main - this function executes before the main function
*/

void __attribute__((constructor)) before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
