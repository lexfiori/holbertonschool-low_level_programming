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
	int size;
	char *copy;

	size = strlen(str);
	copy = (char *)malloc(sizeof(char) * (size + 1));
	if (copy == NULL)
	{
		return (NULL);
	}

	while (*str)
	{
		*copy = *str;
		str++;
		copy++;
		printf("this is str %c\n", *str);
	}
	*copy = '\0';

	return (copy);
	free(copy);
}
