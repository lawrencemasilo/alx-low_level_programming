#include "main.h"

/**
 * print_alphabet_x10 - 'is a funtion that outputs the  alphabet 10x'
 * @void: 'no type'
 */

void print_alphabet_x10(void)
{
	int i = 1;

	while (i <= 10)
	{
		print_alphabet();
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
