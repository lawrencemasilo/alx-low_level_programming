#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the integer
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	int shift = (sizeof(unsigned long int) * 8) - 1;
	int temp;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	temp = n & (1 << shift);
	while ((temp == 0) && (shift > 0))
	{
		shift--;
	}
	while (shift >= 0)
	{
		if (n & (1 << shift))
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		shift--;
	}
}
