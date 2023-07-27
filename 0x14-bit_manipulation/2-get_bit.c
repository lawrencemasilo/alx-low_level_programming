#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: integer
 * @index: the index
 * Return: valus of the bit at particular index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int range = (sizeof(unsigned long int) * 8);
	unsigned long int index_value, bits;

	if (index >= range)
	{
		return (-1);
	}
	else
	{
		bits = n >> index;
		index_value = bits & 1;
	}
	return (index_value);
}
