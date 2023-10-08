#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _calloc - Allocates memory of an array, using malloc
 * @nmemb: input
 * @size: input
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t totalSize;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	totalSize = nmemb * size;
	ptr = malloc(totalSize);
	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, totalSize);
	return (ptr);
}
