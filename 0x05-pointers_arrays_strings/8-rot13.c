#include "holberton.h"

/**
 * rot13 - change certain letters to certain other letters
 * @s: a char array passed as a char pointer
 *
 * Return: s
 */


char *rot13(char *s)
{
	int n = 0;
	int j = 0;

	char rot131[] = "ABCDEFGHIJKLMabcdefghijkl";
	char rot132[] = "NOPQRSTUVWXYZnopqrstuvwxyz";

	for (n = 0; s[n] != '\0'; n++)
	{
		for (j = 0; j <= 26; j++)
		{
			if (s[n] == rot131[j])
			{
				s[n] = rot132[j];
			}
			else if (s[n] == rot132[j])
			{
				s[n] = rot131[j];
			}
			else
			{
				s[n] = s[n];
			}
		}
	}
	return (s);
}
