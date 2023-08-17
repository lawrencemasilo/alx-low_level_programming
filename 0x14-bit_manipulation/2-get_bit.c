#include "main.h"

/**
 * get_bit - gets a bit at a particular index
 * @n: the integer
 * @index: the index
 * Return: the bit at that index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int range = (sizeof(unsigned long int) * 8);
	unsigned long int index_value;

	if (index >= range)
	{
		return (-1);
	}
	else if (index <= range)
	{
		index_value = (n >> index) & 1;
	}
	return (index_value);
}
