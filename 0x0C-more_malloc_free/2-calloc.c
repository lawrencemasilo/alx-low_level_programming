#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: byte size
 * Return: a (successful) NULL (failed)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	a = malloc(nmemb * size);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		a[i] = 0;
	}
	return (a);
}
