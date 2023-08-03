#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: integer
 * @index: the index
 * Return: 1 when successful, -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int range = (sizeof(unsigned long int) * 8), shift;

	if (index >= range)
	{
		return (-1);
	}
	else if (index <= range)
	{
		shift = 1 << index;
		*n = *n | (shift);
	}
	return (1);
}
