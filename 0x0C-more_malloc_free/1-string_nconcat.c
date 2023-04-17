#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: con (successful) NULL (failed)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, x, lens1 = 0, lens2 = 0;
	char *con;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[lens1] != '\0')
	{
		lens1++;
	}
	while (s2[lens2] != '\0')
	{
		lens2++;
	}
	if (n >= lens2)
	{
		n = lens2;
	}
	con = (char *)  malloc((lens1 + n) + 1);
	if (con == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < lens1; i++)
	{
		con[i] = s1[i];
	}
	for (x = 0; x <= n; x++)
	{
		con[i + x] = s2[x];
	}
	con[x + i] = '\0';
	return (con);
}
