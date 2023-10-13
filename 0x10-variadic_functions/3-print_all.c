#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - Prints anything
 * @format: lists types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int c = 0;
	char *str, *on = " ";

	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[c])
		{
			switch (format[c])
			{
				case 'c':
					printf("%s%c", on, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", on, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", on, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", on, str);
					break;
				default:
					c++;
					continue;
			}
			on = ", ";
			c++;
		}
	}

	va_end(args);
	printf("\n");
}
