#include "holberton.h"

/**
 * _print_last_digit - prints last digit
 * @n: an integer
(*
* Description: prints last digit
(* section header: Section description)*
* Return: 1 or 0 depending
*/

int print_last_digit(int n)
{
	if (n > 0)
	{
		n = n % 10;
		_putchar(n + '0');
	}
	else if (n < 0)
	{
		n = -n;
		n = n % 10;
		_putchar(n + '0');
		return(n);
	}
	else
	{
		_putchar(n + '0');
	}
	return (0);
}
