#include "holberton.h"

/**
 * _strlen_recursion - recursively checks the string length
 * @s: a pointer to a string of characters
 *
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	int x;

	if (*s == '\0')
	{
		return (0);
	}
	x =  (_strlen_recursion(++s));
	return (x + 1);
}
