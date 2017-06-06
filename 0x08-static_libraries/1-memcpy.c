#include "holberton.h"

/**
 * _memcpy - copies memory area
 * @dest - a pointer to a string
 * @src - another pointer to a string
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] == src[i];
	}

	return (dest);
}
