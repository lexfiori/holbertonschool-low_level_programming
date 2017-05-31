#include "holberton.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: a string of characters
 * @accept: a string of characters
 *
 * Return: bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int n, j, bytes;

	for (n = 0; s[n] != '\0'; n++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[n] == accept[j])
			{
				bytes++;
				break;
			}
			if (s[n] != accept[j])
			{
				break;
			}
		}
	}
	return (bytes);
}
