#include "main.h"

/**
 * string_toupper - This function changes lowercase charaters into uppercase
 * @str: string array argument
 * Return: returns the results str
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}
	}
}
