#include <stdio.h>
#include "holberton.h"

/**
 * _puts - puts a character
 *
 * @str: a string
 *
 * Return: 0
 */

void _puts(char *str)
{

	int i = 0;

	while (str[i])
	{
		putchar(str[i++]);
	}
	_putchar(10);
}
