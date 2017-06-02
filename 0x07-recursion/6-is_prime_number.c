#include "holberton.h"

/**
 * is_prime_number - checks if a number is a prime
 * @n: an integer
 *
 * Return: 0
 */

int is_prime_number(int n)
{
	if (n == 1)
	{
		return (1);
	}

	else if (n < 1)
	{
		n = is_prime_number(n / 2);
	}

	return (0);
}
