#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: number of elements in array
 * @av: pointer pointing to argument array
 * Return: a (successful) NULL (failed)
 */

char *argstostr(int ac, char **av)
{
	char *a;
	int i;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	a = (char *) malloc(ac * sizeof(char));
	if (a == NULL)
	{
		return (a);
	}
	for (i = 0; i < ac; i++)
	{
		a[i] = *av[i];
	}
	return (a);
}
