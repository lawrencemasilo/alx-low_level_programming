#include "main.h"

/**
 * _print_rev_recursion - This function prints strings in reverse
 * @s: pointer pointing to a string value
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
