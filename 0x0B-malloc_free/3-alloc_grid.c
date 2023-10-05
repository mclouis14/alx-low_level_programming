#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Returns pointer to 2 dimensional array of integers.
 * @width: input
 * @height: input
 * Return: pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **iii;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);
	iii = malloc(sizeof(int *) * height);
	if (iii == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		iii[a] = malloc(sizeof(int) * width);
		if (iii[a] == NULL)
		{
			for (; a >= 0; a--)
				free(iii[a]);
			free(iii);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			iii[a][b] = 0;
	}
	return (iii);
}
