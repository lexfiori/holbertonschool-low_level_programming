#include "holberton.h"

/**
 * print_most_numbers - prints most numbers with the exception of 2 and 4
 *
 * Description - prints most numbers with the exception of 2 and 4
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		if (c != 50 || c != 52)
		{
			_putchar(c);
		}
		else
		{
			c++;
		}
	}
	_putchar('\n');
}
