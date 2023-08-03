#include "main.h"

/**
 * binary_to_uint - converts a base2 to base10
 * @b: the binary number
 * Return: the converted base10
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int convertedNumber = 0, i = 0;

	if (b == NULL)
	{
		return (0);
	}
	else if (b != NULL)
	{
		while (b[i] != '\0')
		{
			if ((b[i] != '1') && (b[i] != '0'))
			{
				return (0);
			}
			else
			{
				convertedNumber = (convertedNumber * 2);
				convertedNumber = convertedNumber + (b[i] - '0');
			}
			i++;
		}
	}
	return (convertedNumber);
}
