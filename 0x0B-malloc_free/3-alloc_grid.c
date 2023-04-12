#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: number of columns
 * @height: number of rows
 * Return: a (successful) NULL (failed)
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **a;

	if (width == 0 || width < 0)
	{
		return (NULL);
	}
	if (height == 0 || height < 0)
	{
		return (NULL);
	}
	a = malloc(height * sizeof(int *));
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			return (NULL);
		}
	}
	for (j = 0; j < width; j++)
	{
		for (i = 0; i < height; i++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
