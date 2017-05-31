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
	int n, i;

	while (needle)
	{
		n++;
	}

	while (*haystack)
	{
		for (i = 0; i < n; i++)
		{
			if (*haystack != *needle)
			{
				return (haystack - 1);
			}
			else
			{
				haystack++; needle++;
			}
		}
	}
	return (0);
}
