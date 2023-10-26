#include "main.h"
#include <stdio.h>

/**
 * print_binary - Print binary representation of an unsigned long int.
 * @n: number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int now;

	if (n == 0)
	{
		printf("0");
		return;
	}

		for (mask = n, now = 0; (mask >>= 1) > 0; now++)
			;

		for (; now >= 0; now--)
		{
			if ((n >> now) & 1)
				printf("1");
			else
				printf("0");
		}
}
