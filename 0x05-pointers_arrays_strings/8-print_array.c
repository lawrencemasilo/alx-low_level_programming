#include <stdio.h>
#include "main.h"

/**
 * print_array - this function prints n elements of an array
 * @a: array argument
 * @n: int argument
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
