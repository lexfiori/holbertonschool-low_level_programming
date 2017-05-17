#include "holberton.h"
#include<stdio.h>
/**
 * print_to_98 - prints backwards and forwards to 98
 *
 * @n: integer
 *
 * Return - 0
 *
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	if (n > 98)
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	printf("98\n");
}
