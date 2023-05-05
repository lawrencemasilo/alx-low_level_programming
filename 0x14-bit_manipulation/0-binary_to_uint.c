#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary string
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, len = 0;
	unsigned int num = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if (b[i] == '0')
		{
			num = (num << 1) | 0;
		}
		else if (b[i] == '1')
		{
			num = (num << 1) | 1;
		}
		else
		{
			return (0);
		}
	}
	return (num);
}
