#include "holberton.h"

/**
 * jack_bauer - prints hours and minutes
 *
 *
 * 
 * Return: 0 depending
*/


void jack_bauer(void)
{
	int k;
	int w;

	for (k = 0; k <= 23; k++)
	{
		int l = k / 10;
		int m = k % 10;

		for (w = 0; w <= 59; w++)
		{
			
			int n = w / 10;
			int o = w % 10;

			_putchar((l) + '0');
			_putchar((m) + '0');
			_putchar(':');
			_putchar((n) + '0');
			_putchar((o) + '0');
			_putchar('\n');
		}
	}
}
