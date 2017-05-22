#include "holberton.h"

/**
 * print_numbers - this prints the numbers from 0 to 9
 *
 * Description - print the numbers from 0 to 9
 *
 * Return: void
 */

void print_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		_putchar(c);
	}
	_putchar ('\n');
}
