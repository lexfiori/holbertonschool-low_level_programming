#include "holberton.h"

/**
 * _puts - puts a character
 *
 * @str: a string
 *
 * Return: void
 */

void _puts(char *str)
{

	int i = 0;

	while (str[i])
	{
		_putchar(str[i++]);
	}
	_putchar('\n');
}
