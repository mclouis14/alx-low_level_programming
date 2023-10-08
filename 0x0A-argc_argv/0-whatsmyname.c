#include "main.h"
#include <stdio.h>
/**
 * main - Program prints its name, followed by new line
 * @argc: number of arguements
 * @argv: array of arguements
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
	else
	{
		printf("program name could not be determined.\n");
	}

	return (0);
}
