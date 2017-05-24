#include "holberton.h"

/**
 * puts_half - puts
 *
 * @str: a string
 *
 * Return - 0
 */

void puts_half(char *str)
{
	int n;
	int j;

	while (str[n])
	{
		n++;
	}

	for (j = (n / 2); j < n; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
