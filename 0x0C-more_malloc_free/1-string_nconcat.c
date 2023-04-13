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
	unsigned int i, j = 0;
	char *con;
	unsigned int len1 = 0, len2 = 0;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	while (s1[j] != '\0')
	{
		len1++;
		j++;
	}
	while (s2[j] != '\0')
	{
		len2++;
		j++;
	}
	if (n >= len2)
	{
		n = len2;
	}
	con = malloc((len1 + len2) * sizeof(char) + 1);
	if (con == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		con[i] = s1[i];
	}
	for (i = 0; i <= n; i++)
	{
		con[i + n] = s2[i];
	}
	con[len1 + len2 + 1] = '\0';
	return (con);
}
