#include "main.h"

/**
 * _sqrt_recursion - Function returns natural square root of number
 * @n: input
 * Return: square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		int start = 1;
		int end = n;

	while (start <= end)
	{
		int mid = start + (end - start) / 2;
		int square = mid * mid;

		if (square == n)
		{
			return (mid);
		}
		else if (square < n)
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
	}
	return (-1);
	}
}
