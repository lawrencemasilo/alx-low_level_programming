#include "main.h"

/**
 * get_bit - returns bit at a given index
 * @n: the number to be converted
 * @index: the index
 * Return: the bit or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int a;
	
	a = (n >> index) & 1;
	if (a < 0)
	{
		return (-1);
	}
	return (a);
}
