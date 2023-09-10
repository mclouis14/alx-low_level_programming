#include <stdio.h>
/**
 * main - This is the function for the task
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 16; a++)
	{
	if (a < 10)
	putchar('0' + a);
	}
	putchar('f' + (a - 10));
	putchar('\n');
	return (0);
}
