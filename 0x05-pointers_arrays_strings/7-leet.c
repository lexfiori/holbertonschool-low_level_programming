#include "holberton.h"

/**
 * leet - change the variables to the correct number
 * @s: an array
 *
 * Return: 0
 */

char *leet(char *s)
{
	int n, k, j;
	char letters[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char leet[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	while (s[n])
	{
		n++;
	}

	for (j = 0; j < n; j++)
	{
		for (k = 0; k < 10; k++)
		{
			if (s[j] == letters[k])
			{
				s[j] = leet[k];
			}
		}
	}
	return (s);
}
