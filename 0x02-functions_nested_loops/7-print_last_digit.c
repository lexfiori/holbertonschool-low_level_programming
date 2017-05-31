#include "holberton.h"

/**
 * print_last_digit - prints last digit
 *
 * @n: an integer
 *
 * Return: j
 */

int print_last_digit(int n)
{
	int j;

	if (n != 0)
	{
		j = n % 10;

		if (n < 0)
		{
			j = -j;
		}

		_putchar(j + '0');
	}


	else
	{
		j = 0;
		_putchar(j + '0');
	}
	return (j);
}
