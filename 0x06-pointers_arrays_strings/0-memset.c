#include "holberton.h"

/**
 * _memset - fills memory with constant byte b
 * @s: char s
 * @b: char b
 * @n: unsigned int n
 *
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
