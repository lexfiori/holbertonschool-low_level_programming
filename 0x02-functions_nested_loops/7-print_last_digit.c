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
	if (n > 0)
	{
		n = n % 10;
		_putchar(n + '0');
		return (n);
	}
	else if (n < 0)
	{
		n = -n;
		n = n % 10;
		_putchar(n + '0');
		return (n);
	}
	else
	{
		_putchar(n + '0');
		return (n);
	}
	return (0);
}
