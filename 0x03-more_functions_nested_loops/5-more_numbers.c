#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14, followed by nl
 *
 * Description - prints 10 times the numbers, from 0 to 14, followed by nl
 *
 * Return: 0
 */

void more_numbers(void)
{
	int c;
	int d;

	for (d = 0; d < 10; d++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10 && c <= 14)
			{
				_putchar((c / 10) + '0');
			}
			_putchar ((c % 10) + '0');
		}
		_putchar('\n');
	}
}
