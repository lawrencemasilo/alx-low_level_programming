#include "main.h"

/**
 * flip_bits - gets numberof bits need to flip, get from one number to another
 * @n: first int
 * @m: second int
 * Return: number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0, temp, temp2;

	if ((n != 0) && (m != 0))
	{
		temp2 = n ^ m;
		while (temp2 > 0)
		{
			temp = temp2 & 1;
			bits = bits + temp;
			temp2 = temp2 >> 1;
		}
	}
	return (bits);
}
