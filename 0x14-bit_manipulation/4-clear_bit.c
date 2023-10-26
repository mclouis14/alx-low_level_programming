#include "main.h"
#include <stdio.h>

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: pointer to the number in which to clear the bit
 * @index: index of the bit to clear (0-based)
 * Return: 1 if it worked, or -1 if an error occured.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	mask = 1UL << index;
	*n = *n & (~mask);
	return (1);
}
