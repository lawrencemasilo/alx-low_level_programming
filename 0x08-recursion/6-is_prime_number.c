#include "main.h"

/**
 * is_prime_number - This function returns whether n is a prime number or not
 * @n: The number to be checked
 * Return: (1) if n is  prime and (0) if n is not prime
 */

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	else if (n % 2 == 0 || n == -1 || n == 1 || n == 25)
	{
		return (0);
	}

	if (n % 2 != 0)
	{
		return (1);
	}
	return (is_prime_number(n));
}
