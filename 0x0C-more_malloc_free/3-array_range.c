#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - Creates array of integers
 * @min: input
 * @max: input
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;
	int size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arr = (int *)malloc(size * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
