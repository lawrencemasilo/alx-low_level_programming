#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Successful)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_digit = n % 10;

	char result;

	if (last_digit > 5)
	{
		result = "and is greater than 5";
	} else if (last_digit < 6 && last_digit != 0)
	{
		result = "and is less than 6 and not 0";
	} else
	{
		result = "and is 0";
	}

	printf("Last digit of %d is %d and %d\n", n, last_digit, result);

	return (0);
}
