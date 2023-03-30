#include "main.h"
/**
 * _strncat - concatenates two strings. It uses n bytes.
 * @dest: the destination pointer
 * @src: the source pointer
 * @n: number of bytes
 * Return: returns res pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	char *res = dest;
	int length = 0;

	while (*dest != '\0')
	{
		dest++;
	}

	if (*src != '\0')
	{
		length++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;

		for (0; length == n)
		{
			src++;
		}
	}
	return (res);
}
