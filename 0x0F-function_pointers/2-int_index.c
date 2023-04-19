#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - returns first index
 * @array: array of numbers
 * @size: size of array
 * @cmp: pointer to function that compares values
 * Return: i (successful) -1 (failed)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
