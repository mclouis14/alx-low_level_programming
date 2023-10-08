#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Function allocates memory using malloc.
 * @b: input
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
