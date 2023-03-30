#include "main.h"

/**
 * reverse_array - This function reverses an array
 * @a: the array argument
 * @n: the number of elements in array
 */
void reverse_array(int *a, int n)
{
	int i, var;

	for (i = 0; i < n / 2; i++)
	{
		var = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = var;
	}
}
