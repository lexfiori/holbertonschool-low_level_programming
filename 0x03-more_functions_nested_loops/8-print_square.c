#include "holberton.h"

/**
 * print_square - print a square of hashtags
 * @size: an integer
 *
 * Description - print a square of hashtags
 *
 * Return: 0
 */

void print_square(int size)
{
	int n = size;
	int j;

	if (n > 0)
	{
		for (n = 0; n < size; n++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
