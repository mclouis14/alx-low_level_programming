#include "main.h"
#include <stdio.h>

/**
 * get_bit - Get the value of a bit at a given index.
 * @n: number to evaluate
 * @index: index starting from 0 of the bit we want to get
 * Return: Value of bit at index, or -1 if error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;


	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	mask = 1UL << index;

	if ((n & mask) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
