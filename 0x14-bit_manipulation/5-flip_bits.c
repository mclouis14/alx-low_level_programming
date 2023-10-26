#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Returns the nnumber of bits to flip to get from n to m.
 * @n: first number
 * @m: second number
 * Return: number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int total;
	unsigned int count;

	total = n ^ m;
	count = 0;

	while (total > 0)
	{
		if (total & 1)
		{
			count++;
		}
		total >>= 1;
	}

	return (count);
}
