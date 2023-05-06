#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be converted
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int i, num, flag = 0, size = sizeof(n);

	for (i = (size * 8) - 1; i >= 0; i--)
	{
		num = (n >> i) & 1;
		if (num)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag || i == 0)
		{
			_putchar('0');
		}
	}
}
