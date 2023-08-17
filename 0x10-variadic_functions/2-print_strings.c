#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints string
 * @separator: string separator
 * @n: the number of strings passed
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *a;

	va_list args;

	va_start(args, n);

	if (separator == NULL)
	{
		return;
	}
	for (i = 0; i < n; i++)
	{
		a = va_arg(args, char *);

		if (a == NULL)
		{
			printf("nil");
			if (i != (n - 1))
			{
				printf("%s", separator);
			}
		}
		printf("%s", a);
		if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
