#include"holberton.h"

/**
 * print_alphabet_x10 - prints the alphabet ten times
 *
 * Description - prints the alphabet ten times
 *
 * Return (0)
 *
 */

void print_alphabet_x10(void)
{
	char c;
	int n;

	for (n = 0; n <= 9; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
