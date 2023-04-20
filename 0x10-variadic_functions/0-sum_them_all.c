#include "variadic_functions.h"

/**
 * sum_them_all - sums all parameter
 * @n: first parameter
 * Return: sum (successful)
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum_;
	unsigned int i;

	va_list args;

	va_start(args, n);

	sum_ = 0;

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		int a = va_arg(args, int);

		sum_ += a;
	}
	va_end(args);
	return (sum_);
}
