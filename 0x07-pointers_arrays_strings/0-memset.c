#include "main.h"

/**
 * _memset - This function fills memory with a constant byte n times
 * @s: "a pointer to the memory that will be filled"
 * @b: "the const byte that will fill the memory"
 * @n: "the number of bytes to be filled with the constant"
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *pS = (char *) s;

	for (i = 0; i < n; i++)
	{
		*pS++ = (char) b;
	}
	return (s);
}
