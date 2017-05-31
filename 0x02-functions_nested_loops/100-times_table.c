#include "holberton.h"

/**
 * print_times_table - prints the times table according to n
 *
 *
 * Return: int n
 */

void print_times_table(int n)
{
	int a, b, c;

	if(!(n < 15 && n >= 0)
	   return;
	   for (a = 0; a <= n; a++)
	   {
		   for (b = 0; b <= n; b++)
		   {
			   c = a + b;
			   if (b == 0)
				   _putchar(c + '0');
			   _putchar(',');
			   _putchar(' ');
			   if (c >= 10 && c <= 99)
			   {
				   _putchar(' ');
				   _putchar(' ');
				   _putchar((c % 10) + '0');
			   }
			   if (c > 99)
			   {
				   int d = c / 10;
				   _putchar((d / 10) + '0');
				   _putchar((d % 10) + '0');
				   _putchar((c % 10) + '0');
			   }
		   } putchar('\n');
	   }
	   }
}
