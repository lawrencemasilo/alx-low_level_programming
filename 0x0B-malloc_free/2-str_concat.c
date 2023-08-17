#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: con (successsful) NULL (failed)
 */

char *str_concat(char *s1, char *s2)
{
	int i, b;
	char *con;
	int len1 = 0;
	int len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	con = (char *) malloc((len1 + len2 + 1) * sizeof(char));
	if (con == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		con[i] = s1[i];
	}
	for (b = 0; b < len2; b++)
	{
		con[i + b] = s2[b];
	}
	con[len1 + len2] = '\0';
	return (con);
}
