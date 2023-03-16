#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'This program prints data type sizes'
 *
 * @void: 'no type'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %zu byte(s)", sizeof(char));
	printf("Size of an int: %zu byte(s)", sizeof(int));
	printf("Size of a long int: %zu byte(s)", sizeof(long));
	printf("Size of a long long int: %zu byte(s)", sizeof(long long));
	printf("Size of a float: %zu byte(s)", sizeof(float));

	return (0);
}
