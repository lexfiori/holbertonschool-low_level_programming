#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - print two diagonals of a square matrix of integer
 *
 * @a: integer
 * @size: integer size
 */

void print_diagsums(int *a, int size)
{
	int i, left = 0, right = 0;

	for (i = 0; i < size; i++)
	{
		left += *(a + (i * size) + i);
		right += *(a + (i * size) + (size - 1) - i);
	}
	printf("%i, %i\n", left, right);
}
