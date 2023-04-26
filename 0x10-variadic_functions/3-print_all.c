#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: types of arguments passed
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	char c;
	int i = 0;
	float f;
	char *s;

	va_list args;

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				printf(", ");
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%i", i);
				printf(", ");
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
		}
		if (format[i] == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
			{
				printf("(nil)");
			}
			printf("%s", s);
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
