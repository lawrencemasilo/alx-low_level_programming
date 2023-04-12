#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the string to be copied
 * Return: p (successful) NULL (failed)
 */

char *_strdup(char *str)
{
	char *p;
	int i;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	p = (char *) malloc(len * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
