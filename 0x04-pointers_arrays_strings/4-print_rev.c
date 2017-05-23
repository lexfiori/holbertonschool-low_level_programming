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
	int i = 0;
	int k = 0;

	while (s[i])
	{
		i++;
	}
	for (k = i; k >= 0; k--)
	{
		putchar(s[k]);
	}
	putchar('\n');
}
