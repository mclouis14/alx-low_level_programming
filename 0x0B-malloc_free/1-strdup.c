#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - Returns pointer to newly allocated space in memory
 * that contains copy of string given as parameter.
 * @str: input
 * Return: Always 0
 */
char *_strdup(char *str)
{
	char *iii;
	int b, c = 0;

	if (str == NULL)
		return (NULL);
	b = 0;
	while (str[b] != '\0')
		b++;
	iii = malloc(sizeof(char) * (b + 1));
	if (iii == NULL)
		return (NULL);
	for (c = 0; str[c]; c++)
		iii[c] = str[c];
	return (iii);
}
