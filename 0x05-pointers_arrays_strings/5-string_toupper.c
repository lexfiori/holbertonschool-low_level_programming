#include "holberton.h"

char *string_toupper(char *s)
{
	int i, j;

	while(s[i])
	{
		i++;
	}

	for(j = 0; j < i; j++)
	{
		if(s[j] >= 97 && s[j] <= 122)
		{
			s[j] = s[j] - 32;
		}
	}
	return (s);
}
