#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - strdrup
 * @str: a string
 *
 * Return: 0
 */

char *_strdup(char *str)
{
	int size, i = 0;
	char *copy;

	size = strlen(str);
	copy = (char *)malloc(sizeof(char) * (size + 1));
	if (str == '\0')
	{
		return (NULL);
	}
	if (copy == '\0')
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		copy[i] = str[i];
	}
	copy[i] = '\0';
	return (copy);
}
