#include "holberton.h"

/**
 * _strspn - length of the prefix of a substring
 * @s: a pointer to a string of characters
 * @accept: a pointer to a string of characters
 *
 * Return: the count
 */

unsigned int _strspn(char *s, char *accept)
{
	int n, k;
	int bytes = 1;

	for (n = 0; s[n] != '\0'; n++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[n] != accept[k])
			{
				k++;
			}
			else if (s[n] == accept[k])
			{
				bytes++;
			}
		}
	}
	return (bytes);
}
