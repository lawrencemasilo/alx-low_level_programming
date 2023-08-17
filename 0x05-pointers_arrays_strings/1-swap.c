#include "main.h"

/**
 * swap_int - this function swaps two integers
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
