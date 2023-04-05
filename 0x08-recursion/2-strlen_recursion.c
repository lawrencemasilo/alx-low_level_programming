#include "main.h"

/**
 * _strlen_recursion - This function returns the length of a string
 * @s: pointer pointing to the  string value
 * Return: the string length. (0) when you reach end of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
