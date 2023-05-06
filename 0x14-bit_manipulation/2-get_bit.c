#include "main.h"

/**
 * get_bit - returns bit at a given index
 * @n: the number to be converted
 * @index: the index
 * Return: the bit or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a, size = sizeof(n) * 8;

	a = (n >> index) & 1;
	if (index >= size)
	{
		return (-1);
	}
	return (a);
}
