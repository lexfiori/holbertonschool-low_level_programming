#include <stdio.h>

/**
 * rev_string - reverse the string
 *
 * @s: string
 *
 * Return - 0
 */

void rev_string(char *s)
{
	int i = 0;
	int j;
	int k;
	char u;

	while (s[i])
	{
		i++;
	}

	for (j = i; j <= (i / 2); j--)
	{
		k = i - j;
		u = s[k];
		s[k] = s[j];
		s[2] = u;
	}
}
