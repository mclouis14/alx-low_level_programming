#include <stdio.h>
#include "main.h"
/**
 * main - Program prints the number of arguements passed into it.
 * @argc: input
 * @argv: input
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
