#include <stdio.h>

/**
 * print_rev - print the reverse
 *
 * @s: print the character
 *
 * Return - 0
 */

void print_rev(char *s)
{
	int i;
	int k;

	while (s[i])
	{
		i++;
	}
	for (k = (i - 1); k >= 0; k--)
	{
		putchar(s[k]);
	}
	putchar('\n');
}
