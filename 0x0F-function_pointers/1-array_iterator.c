#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Executes func. given as parameter on each element of array
 * @array: input
 * @size: input
 * @action: pointer
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int d;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (d = 0; d < size; d++)
	{
		action(array[d]);
	}
}
