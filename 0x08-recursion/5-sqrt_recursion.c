#include "main.h"

/**
 * _sqrt_a - returns natural square root of number
 * @n: input
 * @c: iterator
 * Return: square root or -1
 */
int _sqrt_a(int a, int b)
{
	if (b * b == a)
	{
	       return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (_sqrt_a(a, b + 1));
}
/**
 * _sqrt_recursion - returns natural square root of
 * a number
 * @n: input
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_a(n, 0));
}
