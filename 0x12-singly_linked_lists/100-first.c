#include "lists.h"

/**
 * print_str - prints a string
 * @str: string to be printed
 * Return: nothing
 */

char print_str(char *str)
{
	printf("%s", str);
	return (*str);
}

/**
 * entry - entry point
 * Return: nothing
 */

void entry(void)
{

	char *str = "You're beat! and yet, you must allow,\n";
	char *str2 = "I bore my house upon my back!\n";

	print_str(str);
	print_str(str2);
}
