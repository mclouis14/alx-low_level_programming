#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints opcodes of own main function
 * @argc: input
 * @argv: input
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int b, i;
	char *a;

	if (argc != 2)
	{
	printf("Error\n");
	exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	a = (char *)main;

	for (i = 0; i < b; i++)
	{
	printf("%.2hhx", a[i]);
	if (i <  b - 1)
		printf(" ");
	}
	printf("\n");
	return (0);
}
