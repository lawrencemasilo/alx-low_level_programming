#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Successful)
 */

int main(void)
{
	int n;
	int la_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	la_digit = n % 10;
	if (la_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, la_digit);
	}
	else if (la_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, la_digit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, la_digit);
	}
	return (0);
}
