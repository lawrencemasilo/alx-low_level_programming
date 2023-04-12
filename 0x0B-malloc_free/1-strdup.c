#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <limits.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the string to be copied
 * Return: p (successful) NULL (failed)
 */

char *_strdup(char *str)
{
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	p = (char *) malloc(sizeof(char));
	/*p = malloc(INT_MAX);*/
	if (p == NULL)
	{
		return (NULL);
	}
	p = str;
	return (p);
}
