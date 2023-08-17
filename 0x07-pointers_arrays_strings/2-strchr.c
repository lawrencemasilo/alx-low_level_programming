#include "main.h"

/**
 * _strchr - This function checks for a character in a string
 * @s: the pointer that points to the string
 * @c: the character to be found
 * Return: (s) if c is found in s, (0) if c was not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
