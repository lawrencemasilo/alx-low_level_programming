#include "main.h"

/**
 * factorial - This function prints factorial of a number
 * @n: integer argument value
 * Return: factorial of integer argument
 */

int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
