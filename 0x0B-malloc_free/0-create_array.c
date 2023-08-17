#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array
 * @size: the size of the array
 * @c: the string that will be contained in the array
 * Return: *array (successful) NULL (failed)
 */

char *create_array(unsigned int size, char c)
{
	int i = 0;
	char *array;

	if (size == 0 || '\0')
	{
		return (NULL);
	}

	array = (char *) malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	while ((unsigned int)i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
