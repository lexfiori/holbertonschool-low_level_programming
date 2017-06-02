#include "holberton.h"

/**
 * _sqrt_recursion - recurse the program to get the square root
 * @n: takes an integer
 *
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}

	else if (n < 1)
	{
		n  =  (n / (_sqrt_recursion(n)));
		if (_checker(n) == 1)
		{
			return (_sqrt_recursion(n));
		}
		else if (_checker(n) == 0)
		{
			return (-1);
		}
	}
	return (0);
}

/**
 * _checker - square root recursion of an int n
 * @n: integer n
 *
 * Return: 0
 */

int _checker(int n)
{
	if (_sqrt_recursion(n) % 10)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
