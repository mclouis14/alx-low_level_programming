#include <stdio.h>
/**
 * main - This is the function for the task
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = 'i'; j <= '9'; j++)
		{
			if (i != j)
			{
				putchar(i + '0');
				{
				putchar(',');
				putchar(' ');
				}
				putchar(j + '0');
				putchar(' ');
			}
		}
	}
	return (0);
}
