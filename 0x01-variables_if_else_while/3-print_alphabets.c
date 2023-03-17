#include <stdio.h>

/**
 * main - Entry point
 * Descripton: 'This program prints the alphabet both in lowercase and uppercase'
 * Return: 0 (successful)
 */

int main(void)
{
	int a;
	int b;
	for (a = 97; a <= 122; a++)
	{
		putchar(a);
	}
	for (b = 65; b <= 90; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
