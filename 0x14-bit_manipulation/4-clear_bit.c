#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the number to be converted
 * @index: the index
 * Return: 1 (successful) -1 (failed)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size = sizeof(unsigned long int) * 8;

	if (index >= size)
	{
		return (-1);
	}
	else
	{
		*n = (~(1 << index)) & *n;
	}
	return (1);
}
