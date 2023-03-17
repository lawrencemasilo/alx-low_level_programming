#include <stdio.h>

/**
 * main - Entry point
 * Description: 'This program prints out the alphabet'
 * Return: 0 (successful)
 */

int main(void)
{
	int a;
	for (a = 97; a <= 122; a++)
	{
		putchar(a);
		putchar("\n");
	}
	return (0);
}
