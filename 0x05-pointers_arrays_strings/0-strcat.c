#include "holberton.h"
#include <stdio.h>

char *_strcat(char *dest, char *src)
{
	int n = 0; int i;

/* move through the array n so the next for loop will stop at
   its last element */

	while (dest[n] != '\0')
	{
		n++;
	}

/* concatenate the very first element of the second string
starting at the very last element of the first string, so
that it actually effects the identity of the first string */

	for(i = 0; src[i] != '\0'; i++, n++)
	{
		dest[n] = src[i];
	}
	return(dest);
}
