#include "main.h"
/**
 * string_toupper - The function changes all lowercase letters to uppercase
 *
 * @str: string input to be changed
 *
 * Return: modified string
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
