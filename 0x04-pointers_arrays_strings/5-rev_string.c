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
	int a = 10, b = 10;

	while (s[i])
	{
		i++;
	}

	for (j = i; j >= ((i - 1)/ 2); j--)
	{
		a = s[k];
		b = s[j];
		k = i - j;
		u = a;
		a = b;
		b = u;
	}
}
