#include "main.h"

/**
 * _memcpy - This function copies a memory area
 * @dest: is the destination pointer with the copied address
 * @src: is the source pointer is the address
 * @n: number of bytes to be copied from the memory area
 * Return: pointer to destination memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest++ = *src++;
	}
	return (dest);
}
