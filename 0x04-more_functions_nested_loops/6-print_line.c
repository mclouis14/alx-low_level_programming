#include "main.h"

/**
 * print_line - the function prints straight line on the terminal
 * @n:number of times the character '_' will be printed
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int c;

		for (c = 1; c <= n; c++)
			_putchar('_');
		_putchar('\n');
	}
}
