#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - 'prints all natural numbers from n to 98'
 * @n: is the argument of the function
 */

void print_to_98(int n)
{
	printf("%d", n);
	int i;

	if (n < 98)
	{
		for (i = n + 1; i <= 98; i++)
		{
			printf(", %d", i);
		}
	}
	else
	{
		for (i = n - 1; i >= 98; i--)
		{
			printf(", %d", i);
		}
	}
}
