#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: argument count
 * @argv: argument array
 * Return: 0 (successful) 1 (failed)
 */

int main(int argc, char *argv[])
{
	int cents, num_coins, total = 0, i;
	int c_arr[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	num_coins =  sizeof(c_arr) / sizeof(c_arr[0]);

	for (i = 0; i < num_coins; i++)
	{
		total = total + (cents / c_arr[i]);
		cents = cents % c_arr[i];
	}
	printf("%d", total);
	printf("\n");
	return (0);
}
