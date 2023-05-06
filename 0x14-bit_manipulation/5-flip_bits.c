#include "main.h"

/**
 * flip_bits - returns bits you would need to flip to get from a num to another
 * @n: first number
 * @m: number you want to get to
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a, total = 0;

	a = n ^ m;

	while (a)
	{
		total = total + ((a >> 0) & 1);
		a = (a >> 1);
	}
	return (total);
}
