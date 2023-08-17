#include "main.h"

/**
 * rev_string - this function prints a string in reverse
 * @s: pointer argument
 */

void rev_string(char *s)
{
	char *start = s;
	char *end = s;

	while (*end)
	{
		end++;
	}
	end--;

	while (start < end)
	{
		char tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}

}
