#include "holberton.h"

/**
 * print_last_digit - prints last digit
 * @n: an integer
(*
* Description: prints last digit
(* section header: Section description)*
* Return: n
*/

int print_last_digit(int n)
{
	int j;

	if (n > 0)
	{
		j = n % 10;
		_putchar(j + '0');

	}

	else if (n < 0)
	{
		j = -n;
		j = j % 10;
		_putchar(j + '0');
	}

	else
	{
		j = 0;
		_putchar(n + '0');
	}
	return (j);
}
