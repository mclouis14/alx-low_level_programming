#include "main.h"

/**
 * print_numbers - the function checks to ascertain for a digit (0 through 9).
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
