#include <stdio.h>

/**
 * swap_int - swap ints
 * @a: an integer a
 * @b: an integer b
 *
 * Return - 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
