#include "main.h"

/**
 * print_line - draws a straight
 * @n: is the argument
 */

void print_line(int n)
{
	int i;

	for (i = n; i >= 0; i--)
	{
		if (n == 0 || n < 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}
