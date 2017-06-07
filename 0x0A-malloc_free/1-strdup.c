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
	int size, i;
	char *copy;

	size = strlen(str);
	copy = (char *)malloc(sizeof(char) * (size + 1));
	if (copy == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		copy[i] = str[i];
	}
	copy[i] = '\0';

	return (copy);
	free(copy);
}
