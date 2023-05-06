#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be converted
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int i, size = sizeof(n), num;

	for (i = (size * 8) - 1; i >= 0; i--)
	{
		num = (n >> i) & 1;
		if (num)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}
