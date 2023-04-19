#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function of  the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (successful)
 */

int main(int argc, char *argv[])
{
	int num1, num2, equ;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op_func = get_op_func(argv[2]);
	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if  ((argv[2][0] == '%' || argv[2][0] == '/') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	equ = op_func(num1, num2);
	printf("%d\n", equ);
	return (0);
}
