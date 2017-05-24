#include "holberton.h"

/**
 * puts2 - puts
 *
 * @str: a string
 *
 * Return - 0
 */

void puts2(char *str)
{
	int n;
	int i;

	while (str[n])
	{
		n++;
	}

	for (i = 0; (n - i) > 0; i++)
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar(10);
}
