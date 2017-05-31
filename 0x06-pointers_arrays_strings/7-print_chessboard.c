#include "holberton.h"

/**
 * print_chessboard - print the chessboard
 * @a: this is a string
 *
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int j, i;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar(10);
	}
}
