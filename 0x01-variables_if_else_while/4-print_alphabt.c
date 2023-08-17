#include <stdio.h>

/**
 * main - Entry point
 * Description: 'This program prints the alphabet except of e and q'
 * Return: 0 (successful)
 */

int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l != 'e' && l != 'q')
		{
			putchar(l);
		}
	}
	putchar('\n');
	return (0);
}
