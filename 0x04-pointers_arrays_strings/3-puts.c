#include <stdio.h>
#include "holberton.h"

void _puts(char *str)
{

	int temp;
	temp = *str;

	while (*str)
	{
	       	if(_putchar(temp++) == EOF) return;
	}
	if (_putchar('\n') == EOF) return;
}
