#include <stdio.h>

/**
 * main - This function prints out a programs name
 * @argc: argument count
 * @argv: array containing the string argument
 * Return: always 0 (successful)
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
