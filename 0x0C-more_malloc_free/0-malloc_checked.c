#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: value to allocate memory for
 * Return: p (successful) 98 (failed)
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(b * sizeof(unsigned int));
	if (p == NULL)
	{
		exit(98);
	}
	else
	{
		return (p);
	}
}
