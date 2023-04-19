#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the string name
 * @f: pointer pointing to a funtion
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
