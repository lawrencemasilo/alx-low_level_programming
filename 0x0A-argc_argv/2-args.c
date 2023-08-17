#include <stdio.h>

/**
 * main - This function prints each argument passed including the program name
 * @argc: number of arguments
 * @argv: array which contains string arguments
 * Return: Always 0 (successful)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
