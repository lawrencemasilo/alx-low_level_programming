#include "main.h"

/**
 * reverse_array - This function reverses an array
 * @a: the array argument
 * @n: the number of elements in array
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(a[i]);
	}
}
