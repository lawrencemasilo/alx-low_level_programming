#include "main.h"

/**
 * _abs - outputs the absolute value of an integer.
 * @c: type int.
 * Return: absolute number or zero.
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_1;

		abs_1 = c * -1;
		return (abs_1);
	}
	return (c);
}
