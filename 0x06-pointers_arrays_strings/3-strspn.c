#include "holberton.h"

/**
 * _strspn - length of the prefix of a substring
 * @s: a pointer to a string of characters
 * @accept: a pointer to a string of characters
 *
 * Return: the count
 */

unsigned int _strspn(char *s, char *accept)
{
	int bytes = 0;

	while(*s && *_strchr(accept, *s++))
	{
		bytes++;
	}
	return (bytes);
}

/**
 * *_strchr - the same
 * @s: is a pointer to a string
 * @c: a character
 *
 * Return: 0
 */


char *_strchr(char *s, char c)
{
while (*s != (char)c)
                if (!*s++)
                {
                        return (0);
                }
        return (s);
}

