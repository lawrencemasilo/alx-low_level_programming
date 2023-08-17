#include "main.h"

/**
 * _pow_recursion - This function returns the value of x to the power of y
 * @x: the base
 * @y: the exponent
 * Return: the result or (1) if y is 0  and (-1) if y is less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	y--;
	return (x * _pow_recursion(x, y));
}
