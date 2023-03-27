#include "main.h"
/**
 * print_rev - this function prints a string in rev
 * @s: is pointer argument
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
