#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: smallest value in the array
 * @max: largest value in the array
 * Return: a (successful) NULL (failed)
 */

int *array_range(int min, int max)
{
	int *a;
	int i, len = 0;

	if (min > max)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		len++;
	}
	a = malloc(len * sizeof(int) + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		a[min] = min;
		min++;
	}
	return (a);
}
