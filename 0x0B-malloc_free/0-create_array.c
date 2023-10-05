#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates array of chars, and initializes with a specific char.
 * @size: input
 * @c: input
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int p;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (p = 0; p < size; p++)
		str[p] = c;
	return (str);
}
