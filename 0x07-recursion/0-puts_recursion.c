#include "holberton.h"

/**
 * _puts_recursion - puts a character from a string
 *
 * @s: a pointer to a string
 *
 * Return: 0
 */

void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	if (s[i] == '\0')
	{
		_putchar(10);
	}

}
