#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>

/**
 * array_iterator - executes a function
 * @array: array of numbers
 * @size: size of array
 * @action: pointer pointing to a function
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
