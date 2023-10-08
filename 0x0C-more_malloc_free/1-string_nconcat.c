#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - Function concatenates two strings.
 * @s1: input
 * @s2: input
 * @n: input
 * Return: pointer to resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1, len2, totalLength;

	if (s1 == NULL)
	{
		s1 = ("");
	}
	if (s2 == NULL)
	{
		s2 = ("");
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
	{
		n = (len2);
	}
	totalLength = len1 + n;
	result = malloc(totalLength + 1);

	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strncat(result, s2, n);
	return (result);
}
