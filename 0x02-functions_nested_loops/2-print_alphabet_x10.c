#include "main.h"

/**
 * print_alphabet_x10 - 'is a funtion that outputs the  alphabet 10x'
 * @void: 'no type'
 */

void print_alphabet_x10(void)
{
	int i = 1;
	char a;

	while (i <= 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
		i++;
	}
}
