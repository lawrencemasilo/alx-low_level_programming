#include "main.h"

/**
 * print_diagonal - draws diagonal lines
 * @n: is the argument
 */

void print_diagonal(int n)
{
	int i, a;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < n; i++)
	{
		for (a = 0; a < n; a++)
		{
			if (a == i)
			{
				_putchar('\\');
			}
			else 
			{
				if (a < i)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
