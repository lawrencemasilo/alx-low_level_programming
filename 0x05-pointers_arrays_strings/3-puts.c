#include "main.h"

/**
 * _puts - this function prints a string
 * @str: pointer value
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
