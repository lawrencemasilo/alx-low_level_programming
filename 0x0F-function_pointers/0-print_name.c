#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name
 * @name: the string name
 * @f: pointer pointing to a funtion
 * Return: NULL (failed)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
	}
	(*f)(name);
}
