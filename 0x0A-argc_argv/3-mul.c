#include <stdio.h>
#include <stdlib.h>
/**
 * main - This function prints the multiplication of two arguments
 * @argc: number of arguments
 * @argv: array containing string arguments
 * Return: 0 (successful), 1 (if program doesn't receive two arguments)
 */

int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int mult = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", mult);
	}
	return (0);
}
