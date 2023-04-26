#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes
 * @argc: number of arguments
 * @argv: argument array
 * Return: 0(successful) 1 and 2 (failed)
 */

int main(int argc, char *argv[])
{
	int i, a;
	unsigned char *p = (unsigned char *)main;
	int number_of_bytes = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < number_of_bytes; i++)
	{
		a = *(p + i);
		printf("%02hhx ", a);
	}
	printf("\n");
	return (0);
}
