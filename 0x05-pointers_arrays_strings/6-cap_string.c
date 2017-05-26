#include "holberton.h"

/**
 * cap_string - capitalize ends after delimiters
 * @s: a pointer to a string
 *
 * Return: 0
 */

char *cap_string(char *s)
{
	int z, m, k;
	char chars[13] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, ')', '{', '}'};

	for (m = 0; s[m] != '\0'; m++)
	{
		z = m + 1;

		for (k = 0; k < 13; k++)
		{
			if (s[m] == chars[k] && s[z] >= 97 && s[z] <= 122)
			{
				s[z] = s[z] - 32;
			}
		}
	}
	return (s);
}
