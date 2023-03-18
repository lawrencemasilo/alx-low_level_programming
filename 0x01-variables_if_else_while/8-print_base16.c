#include <stdio.h>

/**
 * main - Entry point
 * Description: 'This program print all the numbers of base 16'
 * @void: 'no type'
 * Return: 0 (successful)
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}

	for (a = 0; a < 6; a++)
	{
		putchar(a + 'a');
	}
	putchar('\n');
	return (0);
}
