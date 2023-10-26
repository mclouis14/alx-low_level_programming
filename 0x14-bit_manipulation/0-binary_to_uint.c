#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: pointer to the binary string
 * Return: the converted number, or 0 on failure
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			total = total << 1;
		}
		else if (b[i] == '1')
		{
			total = (total << 1) | 1;
		}
		else
		{
			return (0);
		}
	}

	return (total);
}
