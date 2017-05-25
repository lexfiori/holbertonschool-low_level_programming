#include "holberton.h"

char *_strncat(char *dest, char *src, int n)
{
	int len, i, j;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (i = len, j = 0; src[j] != 0 && n != 0; n--, i++, j++)
	{
		dest[i] = src[j];
	}

	return (dest);
}
