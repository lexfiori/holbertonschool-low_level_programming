#include "holberton.h"

/**
 * string_toupper - change the string to upper
 * @s: pointer made up of chars
 *
 * Return: 0
 */

char *string_toupper(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] >= 97 && s[j] <= 122)
		{
			s[j] = s[j] - 32;
		}
	}
	return (s);
}
