#include "main.h"
/**
 * _puts - This is the function that prints a string,followed by a new line
 * @str: Function parameter
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	putchar('\n');
}