#include<stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * @size: an unsigned int
 * @c: a char
 *
 * Return: the string
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	p = (char *)malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	if (p == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	p[i] = '\0';
	return (p);
}
