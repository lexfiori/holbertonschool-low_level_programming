#include "holberton.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: a string of characters
 * @accept: a string of characters
 *
 *
 * Return: pointer to the bytes s
 */

char *_strpbrk(char *s, char *accept)
{
	int n, k;

	for (n = 0; s[n] != '\0'; s++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[n] == accept[k])
			{
				return (s);
			}
		}

		if (s[n] != accept[k])
		{
			break;
		}
	}
	return ('\0');
}
