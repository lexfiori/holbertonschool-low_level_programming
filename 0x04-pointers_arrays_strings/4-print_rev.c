#include "holberton.h"

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
	for (k = (i -1); k >= 0; k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}
