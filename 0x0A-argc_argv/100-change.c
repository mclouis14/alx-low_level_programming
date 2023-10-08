#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Program prints minimum number of coins to change for amount of money
 * @argc: input
 * @argv: input
 * Return: 0, 1 (Error)
 */
int main(int argc, char *argv[])
{
	int i, cents, coinCount;
	int coinValues[] = {25, 10, 5, 2, 1};
	int numCoins = sizeof(coinValues) / sizeof(coinValues[0]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	coinCount = 0;
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < numCoins; i++)
	{
		while (cents >= coinValues[i])
		{
			cents -= coinValues[i];
			coinCount++;
		}
	}
	printf("%d\n", coinCount);
	return (0);
}
