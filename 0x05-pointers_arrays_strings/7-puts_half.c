#include "main.h"

/**
 * puts_half - this function prints the last half of a string
 * @str: string argument
 */

void puts_half(char *str)
{
	int firstHalf = 0;
	int endHalf;

	while (str[firstHalf] != '\0')
	{
		firstHalf++;
	}

	endHalf = firstHalf / 2;

	if (firstHalf % 2 == 1)
	{
		endHalf++;
	}

	while (endHalf < firstHalf)
	{
		_putchar(str[endHalf]);
		endHalf++;
	}
	_putchar('\n');
}
