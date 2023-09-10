#include <stdio.h>
/**
 * main - This is the funtion for the task
 * Return: Always 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	putchar(i);
	if (i != 'q' && i != 'e')
	putchar('\n');
	return (0);
}
