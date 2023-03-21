#include "main.h"

/**
 * _islower - checks whether a charater is lowercase
 * @c: int
 * Return: 1 (if lowercase) and 0 (if not lowercase)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
