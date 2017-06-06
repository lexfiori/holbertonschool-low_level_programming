#include "holberton.h"

/**
 * prime_check - checks if a number is a prime
 * @x: an integer
 * @y: another integer
 *
 * Return: 0
 */


int prime_check(int x, int y)
{
	if (y < 2 || x % y == 0)
	{
		return (0);
	}

	if (x > y / 2)
	{
		return (1);
	}

	else
	{
		return (prime_check(x + 1, y));
	}
}

/**
 * is_prime_number - checks if an int is a prime number
 * @n: an integer
 *
 * Return: 0
 */

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}

	return (prime_check(2, n));
}
