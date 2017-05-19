#include "holberton.h"

/**
 * print_diagonal - print diagonals
 * @n: integer
 *
 * Description - this prints diagonals
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	int j;
	int l;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			for (j = 0; j < l; j++)
			{
				_putchar(' ');
			}

			_putchar(92);
			_putchar('\n');
		}
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
