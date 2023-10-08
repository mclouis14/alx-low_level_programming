#include "main.h"
#include <stdio.h>
/**
 * whatsmynmae - Program prints its name, followed by new line
 * @argc: input
 * @argv:input
 * Return: 0
 */
int main(int argc, char *argv[])
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
