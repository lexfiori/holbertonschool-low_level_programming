#include "holberton.h"

/**
 * print_line - draw a straight line in the terminal
 * @n: an integer n
 *
 * Description - draw a straight line in the terminal
 * Return: 0
 */

void print_line(int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
