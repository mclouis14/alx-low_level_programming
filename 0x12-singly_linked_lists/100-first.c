#include <stdio.h>

void startup_message(void) __attribute__((constructor));

/**
 * startup_message - The function will be executed before the main.
 */
void startup_message(void)
{
	printf("You're beat! and yet, you must allow, \n");
	printf("I bore my house upon my back!\n");
}
