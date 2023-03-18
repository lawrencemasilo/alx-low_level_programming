#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (successful)
 */

int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
