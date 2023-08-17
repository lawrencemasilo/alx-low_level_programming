#include "main.h"

/**
 * string_toupper - This function changes lowercase charaters into uppercase
 * @s: string array argument
 * Return: returns the results s
 */
char *string_toupper(char *s)
{
	char *p = s;

	while (*p != '\0')
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p = *p - ('a' - 'A');
		}
		p++;
	}
	return (s);
}
