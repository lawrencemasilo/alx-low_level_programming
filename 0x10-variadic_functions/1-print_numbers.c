#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: number separator
 * @n: number of arguments
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < n; i++)
	{
		int a = va_arg(args, int);

		printf("%d", a);
		if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
