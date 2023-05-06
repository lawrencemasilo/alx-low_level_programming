#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number to be converted
 * @index: the index
 * Return: 1 (successful) -1 (failed)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size = sizeof(unsigned long int) * 8;

	if (index >= size)
	{
		return (-1);
	}
	else
	{
		*n = (1 << index) | *n;
	}
	return (1);
}
