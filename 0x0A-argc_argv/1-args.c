#include <stdio.h>

/**
 * main - This function prints out the argument count
 * @argc: number of arguments
 * @argv: array containing string arguments
 * Return: Always 0 (successful)
 */

int main(int argc, char *argv[])
{
	int num = argc - 1;

	if (num == 0)
	{
		printf("%d\n", num);
	}
	else
	{
		printf("%d\n", num);
	}
	(void) argv;
	return (0);
}
