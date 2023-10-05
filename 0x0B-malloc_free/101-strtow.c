#include "main.h"
#include <stdlib.h>
/**
 * ch_free_grid - Frees 2 dim. array
 * @grid: miltidimensional array of char
 * @height: height of array
 * Return: Nothing
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - Splits string into words.
 * @str: input
 * Return: pointer of array of integers
 */
char **strtow(char *str)
{
	char **iii;
	unsigned int a, height, b, c, d;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (a = height = 0; str[a] != '\0'; a++)
		if (str[a] != ' ' && (str[a + 1] == ' ' || str[a + 1] == '\0'))
			height++;
	iii = malloc((height + 1) * sizeof(char *));
	if (iii == NULL || height == 0)
	{
		free(iii);
		return (NULL);
	}
	for (b = d = 0; b < height; b++)
	{
		for (a = d; str[a] != '\0'; a++)
		{
			if (str[a] == ' ')
				d++;
			if (str[a] != ' ' && (str[a + 1] == ' ' || str[a + 1] == '\0'))
			{
				iii[b] = malloc((a - d + 2) * sizeof(char));
				if (iii[b] == NULL)
				{
					ch_free_grid(iii, b);
					return (NULL);
				}
				break;
			}
		}
		for (c = 0; d <= a; d++, c++)
			iii[b][c] = str[d];
		iii[b][c] = '\0';
	}
	iii[b] = NULL;
	return (iii);
}
