#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: integer value
 * @index: the index value
 * Return: 1 on success and 0 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int range = (sizeof(unsigned long int) * 8), bits;

	if (index >= range)
	{
		return (-1);
	}
	else
	{
		bits = ~(1 << index);
		*n = *n & bits;
	}
	return (1);
}
