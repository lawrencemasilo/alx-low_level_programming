#include "main.h"
/**
 * _sqrt_recursion - This function returns the square root of n
 * @n: The number to be square rooted
 * Return: The square root
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
	return (_sqrt_recursion(n / 2));
}
