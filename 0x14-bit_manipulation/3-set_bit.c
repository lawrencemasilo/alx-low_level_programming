#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: integer value
 * @index: the index
 * Return: 1 on success and -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int range = (sizeof(unsigned long int) * 8);

	if (index >= range)
	{
		return (-1);
	}
	else
	{
		*n |= (1 << index);
	}
	return (1);
}
