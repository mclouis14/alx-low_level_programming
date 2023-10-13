#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - Prints strings followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", str);
	}

	if (separator != NULL && i < n - 1)
	{
		printf("%s", separator);
	}
	}

	va_end(args);

	printf("\n");
}
