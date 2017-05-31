#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - reverse the array
 * @a: a variable at a
 * @n: a variable at n
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int j;
	int l;
	int temp;

	n = n - 1;

	for (j = 0, l = n; j < l; l--, j++)
	{
		temp = a[j];
		a[j] = a[l];
		a[l] = temp;
	}
}
