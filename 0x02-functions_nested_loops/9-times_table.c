#include "holberton.h"

/**
 * times_table - prints letters in ASCII
 *
(* Description: lowercase letters
(*
* Return: void
*/

void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;

			if (c >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}

			if (c < 10 && b != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((c % 10) + '0');
							}
			if (b == 0)
			{
				_putchar(c + '0');
			}
		}
		_putchar('\n');
	}
}
