#include "holberton.h"

/**
 * *_strchr - a function that locates a character on a string
 *
 * @s: pointer to a string
 * @c: pointer to a char
 */

char *_strchr(char *s, char c)
{
	while (*s != (char)c)
		if (!*s++)
		{
			return (0);
		}
	return (char *)s;
}
