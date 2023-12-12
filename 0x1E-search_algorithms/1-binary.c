#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers,
 * using the Binary search algorithm
 * @array:  is a pointer to the first element of the array
 * @size: the number of elements in the array
 * @value: the value to search
 * Return: the index od the value or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, l = 0, r = size - 1;
	int mid;

	if (array == NULL)
		return (-1);

	for (; l <= r; )
	{
		mid = l + (r - l) / 2;
		printf("Searching in array: ");
		for (i = l; i < r; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d", array[r]);
		printf("\n");
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
		{
			r = mid - 1;
		}
		else if (array[mid] < value)
		{
			l = mid + 1;
		}
	}
	return (-1);
}
