#include <stdio.h>

/**
 * main - Entry point
 * Description: 'This program prints all combinations of single digits'
 * @void: 'no type'
 * Return: 0 (successful)
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');

		if (a != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
