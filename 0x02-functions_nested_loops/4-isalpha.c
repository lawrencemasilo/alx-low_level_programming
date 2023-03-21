#include "main.h"

/**
 * _isalpha - Checks if value is a letter
 * @c: int type
 * Return: 1 (if successful) 0 (if unsuccessful)
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
