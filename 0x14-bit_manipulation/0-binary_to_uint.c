#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted_num = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}
	else
	{
		while (b[i] != '\0')
		{
			if ((b[i] != '1') && (b[i] != '0'))
			{
				return (0);
			}
			else
			{
				converted_num = converted_num * 2;
				converted_num = converted_num + (b[i] - '0');
			}
			i++;
		}
	}
	return (converted_num);
}
