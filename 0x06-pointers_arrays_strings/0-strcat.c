#include "main.h"
/**
 * _strcat - This function appends src string to the dest string
 * @dest: first string argument
 * @src: second string argument
 */

char *_strcat(char *dest, char *src)
{
	char *res = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return res;
}
