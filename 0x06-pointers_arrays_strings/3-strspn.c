#include "holberton.h"

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
