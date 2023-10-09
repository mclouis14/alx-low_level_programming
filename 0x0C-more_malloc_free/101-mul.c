#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include "main.h"
/**
 * isDigitString - Check if string is composed of digits
 * @str: input
 * Return: 0
 */
bool isDigitString(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
		{
			return (false);
		}
		str++;
	}
	return (true);
}
/**
 * multiply - perform multiplication
 * @num1: input
 * @num2: input
 * Return: result of multiplication
 */
int multiply(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * main - multiply two positive numbers
 * @argc: input
 * @argv:? input
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *num1_str, *num2_str;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	num1_str = argv[1];
	num2_str = argv[2];
	if (!isDigitString(num1_str) || !isDigitString(num2_str))
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(num1_str);
	num2 = atoi(num2_str);
	result = multiply(num1, num2);
	printf("%d\n", result);
	return (0);
}
