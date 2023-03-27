#include "main.h"

/**
 * _strlen - this function returns the length of a string
 * @s: the argument
 * Return: returns the length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
