#include "holberton.h"

/**
 * *_strstr - finds the first occurence of the substring needle
 * @haystack: returns a string of characters
 * @needle: returns a string of characters
 *
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	int j, i;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}

		}

		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (0);
}
