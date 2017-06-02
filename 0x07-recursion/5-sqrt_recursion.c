#include "holberton.h"

/**
 * check - checks if n is square
 * @n: the number whose square root we want
 * @x: the tested square root
 *
 * Return: 0
 */

int check(int x, int n)
{
	if (x * x == n)
	{
		return (x);
	}
	if (x * x >= n)
	{
		return (-1);
	}
	else
	{
		return (check(x + 1, n));
	}
}

/**
 * _sqrt_recursion - checks if the number is a prime
 * @n: takes an integer
 *
 * Return: n
 */

int _sqrt_recursion(int n)
{
	int x;

	x = 0;
	n = check(x, n);
	return (n);
}
