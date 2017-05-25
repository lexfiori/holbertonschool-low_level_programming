#include "holberton.h"

/**
 * _strncpy - copies the content of a string up to an n
 *
 * @dest: the first string that will have src copied into it
 * @src: the second string that will be put into dest
 * @n: the amount of elements that will be copied from src to dest
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int elmatch;

	for (elmatch = 0; elmatch < n && src[elmatch] != '\0'; elmatch++)
	{
		dest[elmatch] = src[elmatch];
	}
	while (elmatch < n)
	{
		dest[elmatch] = '\0';
		elmatch++;
	}
	return (dest);
}
