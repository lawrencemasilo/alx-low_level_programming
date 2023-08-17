#include "main.h"

/**
 * puts2 - This function prints every other character
 * @str: string argument
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i += 2)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
