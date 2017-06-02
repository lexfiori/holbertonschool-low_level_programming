#include "holberton.h"

/**
 * factorial - return a factorial programmed using recursion
 * @n: a number to be put into the factorial program
 *
 * Return: 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 1 || n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
